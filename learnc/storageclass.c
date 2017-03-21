#include <stdio.h>

/**
auto 局部变量默认的存储类，定义在函数中修饰局部变量
register 定义存储在寄存器而不是ram中的局部变量 意味着变量的最大尺寸等于寄存器的大小，且不能对她应用‘&’因为它没有内存位置
static 编译器在程序的生命周期内保持局部变量的存在，而不需要在它每次进入和离开作用域时创建销毁，亦为之局部变量可以在函数调用之间保持局部变量的值
extern 提供一个全局变量的引用，全局变量对所有的程序文件都是可见的，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置，用来在另一个文件中声明一个全局变量或函数
**/

//auto
{
	int amount;
	auto int amount;
}

//register
{
	register int miles;
}

//static
#include <stdio.h>
/*函数声明*/
void func(void);
static int count = 5; //全局静态变量

int main()
{
	while(count--)
	{
		func();
	}
	return 0;
}
/*函数定义*/
void func(void)
{
	static int i =5; //局部静态变量
	i++;
	printf("i is %d and count is %d \n", i, count);
}

//extern
/*第一个文件main.c*/
#include <stdio.h>
int count;
extern void write_extern();
main()
{
	count = 5;
	write_extern();
}

/*第二个文件 extern main.c中的count */
#include <stdio.h>
extern int count;
void write_extern(void)
{
	printf("count is %d \n", count);
}
