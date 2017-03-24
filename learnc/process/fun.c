#include <stdio.h>
//c语言一般由许多小函数组成，而不是少量较大的函数组成，一个程序可以保存在一个或多个源文件中，各个文件可单独编译，并可以与库中已编译的函数一起加载

//分别处理几个小部分，比单独处理一个整体简单

//程序可以看成变量定义和函数定义的集合。函数之间的通信可以通过参数，函数返回值，及外部变量进行

//外部变量定义在函数之外，可被很多函数一块使用，C语言不允许在函数中定义函数，通过同一个名字对外部变量的引用实际上都是引用同一个对象
//外部变量会使结构模糊，耦合性过大
//逆波兰 (1-2)*(4+5) 12-45+*
/**
while(下一个运算符或操作符不是文件结束指示符)
{
	if(数){压入栈}
	else if(运算符){弹出操作数 执行运算 结果压入栈}
	else if(换行符){弹出并打印栈顶的值}
	else{出错}
}
#include...//一些包含头文件
#define...//一些define定义

//main使用的函数声明
main(){}

void push(double f){...}
double pop(void){...}
int getop(char s[]){...}
**/
#include <stdio.h>
#include <stdlib.h>  //for atof
#include <ctype.h>  //for atof

#define MAXVAL 100 //栈最大值
#define BUFSIZE 100

int sp = 0; //next free stack position
double val[MAXVAL]; //栈
char buf[BUFSIZE];
int bufp = 0;

int getop(char[]);
void push(double f);
double pop(void);

int getch(void);
void ungetch(int);

main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type=getop(s)) != EOF)
	{
		switch(type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '-':
				push(pop()-pop());
				break;
			case '*':
				push(pop()*pop());
			case '/':
		                op2 = pop();
				if(op2 != 0.0)
					push(pop()/op2);
				else
					printf("division by o");
				break;
			case '\n':
				printf("\t%.8g \n", pop());
				break;
			default:
				printf("error");
		}
	} 	
	return 0;
}

void push(double f)
{
	if(sp < MAXVAL)
	{
		val[sp++] = f;
	}
	else
	{
		printf("stack full");
	}
}
double pop(void)
{
	if(sp > 0)
	{
		return val[--sp];
	}
	else
	{
		printf("stack empty");
		return 0.0;
	}
}

int getop(char s[])
{
	int i, c;
	
	while((s[0] = c = getch()) == ' ' || c == '\t')
	{
		
	}
	s[1] = '\0';
	if(!isdigit(c) && c != '.')
	{
		return c;
	}
	i = 0;
	if(isdigit(c))
	{
		while(isdigit(s[++i] = c = getch())
		;
	}
	if(c == '.')
	{
		while(isdigit(s[++i] = c = getch()))
		;
	}
	s[++i] = '\0';
	if(c!=EOF)
	{
		ungetch(c);
	}
	return NUMBER;
}

int getch(void)
{
	return (bufp > 0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	if(bufp > = BUFFSIZE)
	{
		printf("error");
	}
	else
	{
		buf[bufp++] = c;
	}
}






int power(int m, int n);

void main()
{
	int i;
	for(i = 0; i < 10; ++i)
	{
		printf("%d %d %d \n", i, power(2, i), power(-3, i));
	}
}

int power(int base, int n)
{
	int i, p;
	p = 1;
	for(i = 1; i <= n; ++i)
	{
		p = p*base;
	}
	return p;
}

/**
函数定义
返回值类型 函数名(参数声明)
{
	声明部分；
	语句序列;
}
函数定义可以以任意次序出现在一个源文件或多个源文件中,但同一函数不能分割存放
power函数使用的名字只在power函数内部有效,对其他函数不可见
通常函数声明中的参数成为形式参数,函数调用中的参数成为实际参数
main函数要向执行环境返回状态,一般0表示正常

参数--传值调用:
传递给被调用函数的参数值放在临时变量中,而不是存放在原来的变量中,被调用的函数不能直接修改主调用函数中变量的值
必要时:也可以让函数能够修改主调函数中的变量,这种情况,调用者需要向被调用函数提供待设置值的变量的地址(地址就是指向变量的指针)
被调用函数则需要将对应的参数声明为指针类型,并通过它间接访问变量
如果是数组参数,当把数组名用作参数时,传递给函数的值是数组起始元素的位置或地址,并不复制数组元素本身,被调用函数可以通过数组下标访问或修改数组元素的值

静态变量:某些变量,仅供其所在的源文件中的函数使用,其它源文件的函数不能使用 static 也可用于函数内部变量:与普通内部变量不同的是,该函数不管是否被调用,变量一直存在那里

寄存器变量:register告诉编译器,该变量使用频率较高,将其放在寄存器中,可以使程序更小执行速度更快,只适用于函数内部变量及参数
函数内部变量可以屏蔽全局变量

初始化:
	在不进行显式初始化的情况下,外部变量和静态变量将被初始化为0,自动变量和寄存器变量的初值没有定义
**/

