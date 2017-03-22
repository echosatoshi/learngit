#include <stdio.h>

/**字符型数据相关处理**/

int main()
{
	/**int c;
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}**/
	/**while((c=getchar()) != EOF)
	{
		putchar(c);
	}**/
	long nc;
	nc = 0;
	while(getchar() != EOF)
	{
		++nc;
	}
	printf("%ld\n", nc);
	return 0;
}

/**
输入输出按照字符流的方式处理
文本流由多行字符构成的字符序列，每行字符由0个或多个字符组成，行末是换行符\n
标准库提供了一次读/写一个字符的函数，最简单的是getchar 和 putchar
c = getchar()
文本复制
读一个字符
while(该字符不是文件结束指示符)
{
	输出刚读入的字符
	读下一个字符
}
char专门用于存储字符型数据，任何整型也可以用于存储字符型数据
如何区分有效数据和结束符？没有输入时，getchar返回一个特殊值EOF（endoffile）
我们在声明c时，必须让它大到足以存放getchar返回的任何值，所以不把c声明称char
**/
