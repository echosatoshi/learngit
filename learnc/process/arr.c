#include <stdio.h>

void main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	
	printf("digits=");
	for(i=0; i< 10; ++i)
	{
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
	
}

/**
数组下标从0开始
for 可以初始化及打印数组
数组下标可以是任何整形表达式
char类型的字符是小整型，因此char类型的变量和常量在算术表达式中等价于int类型的变量和常量
**/
