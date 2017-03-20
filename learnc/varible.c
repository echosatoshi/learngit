#include <stdio.h>

//变量声明:extern 不需要分配存储空间
extern int a,b;
extern int c;
extern float f;

int main()
{
	/*变量定义需要分配存储空间*/
	int a, b;
	int c;
	float f;

	/*初始化*/
	a = 10;
	b = 20;
	
	c = a+b;
	printf("valud of c%d\n", c);
	
	f = 70.0/0.3;
	printf("value of f%f \n", f);
	
	/**左值ldata内存地址右值内存中的数值**/
	return 0;
}

