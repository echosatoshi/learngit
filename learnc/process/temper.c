#include <stdio.h>
/**
	打印华氏温度摄氏温度对照表
**/

int main()
{
	//int fahr, celsius;
	float fahr, celsius;
	//int lower, upper, step;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		//celsius = 5 * (fahr-32)/9;
		celsius = 5.0/9.0 * (fahr-32.0);
		//printf("%d \t %d \n", fahr, celsius);
		printf("%3.0f \t %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}
}
/**
注释
c语言中，所有变量先声明后使用，声明通常放在函数的起始处，在任何可执行语句之前
声明用于说明变量的属性，由类型名和变量标识符组成
int fahr, celsius;
int flower, upper, step;

int:整数 float:浮点数 取值范围取决于具体的机器 int通常是16位也有32位 float通常32位，至少有6位有效数字
char 字符--1个字节
short 短整型
long 长整型
double 双精度
包含基本类型的数组 结构 联合 指向这些类型的指针 及返回这些类型值的函数

变量初始化
lower = 0;

循环结构
while(fahr <= upper)
{}

printf()通用的格式化输出函数 printf("%d \t %d \n", fahr, celsius);  
printf并不是c语言本身的一部分，c语言并没有定义输入\输出，printf只是标准函数库中的一个有用的函数

%d %6d %6f %6.1f %.1f %o(8进制) %x(16进制) %s %%
**/

