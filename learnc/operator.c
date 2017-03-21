#include <stdio.h>

/*算术运算符+-*\/%++--*/
main()
{
	int a = 21;
	int b = 10;
	int c;
	
	c = a+b;
	c = a-b;
	c = a*b;
	c = a/b;
	c = a%b;
	c = a++;
	c = b--;
}
/*关系运算符== != > <  >= <= */
/*逻辑运算符 && || !*/
/**
位运算符 & | ^
a = 0011 1100
b = 0000 1101

a&b = 0000 1100
a|b = 0011 1101
a^b = 0011 0001
~a  = 1100 0011
*/

/**赋值运算符= += -= *= /= %= <<= >>= &= |= ^= **/
/**杂项
sizeof() 变量大小
&a 变量地址
*a 指向变量
?: 三元运算符
**/
int main()
{
	int a = 4;
	short b;
	long c;
	int* ptr;

	ptr = &a; //ptr指向a的地址
	printf("a的值 %d ", a);
	printf("*ptr的值 %d ", *ptr);

}


