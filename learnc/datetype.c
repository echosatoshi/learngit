#include <stdio.h>
#include <float.h>

/**
basic type:int float
enum type:
void type:
derive（派生） type:指针 数组 结构 共用体 函数

int type:char unsigned char singned char int unsigned int short unsigned short long unsigned long
float type:float double long double
void main(){} int rand(void) void* malloc(size_t size)

**/
int main()
{
	printf("float最大字节%lu\n", sizeof(float));
	printf("float最小数%E\n", FLT_MIN);
	printf("float最大数%E\n", FLT_MAX);
	printf("精度值%d\n", FLT_DIG);
	
	return 0;
} 
