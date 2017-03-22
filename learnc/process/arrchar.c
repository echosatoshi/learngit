#include <stdio.h>

#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while((len = getline(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
	{
		printf("%s", longest);
	}
	return 0;
}

int getline(char s[], int lim)
{
	inc c, i;
	for(i = 0; i< lim -1 && (c = getchar())!=EOF && c!='\n';++i)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i])!='\0')
	{
		++i;
	}
}

/**
	当c语言中出现"hello\0"说明是以数组形式存储的,以\0结束
	局部变量:定义在函数中
	外部变量,定义在所有函数之外,只能定义一次
	在每个需要访问外部变量的函数中,必须声明相应的外部变量 extern type var;
	某些情况可以省略extern:外部变量定义在使用之前，人们通常把变量和函数的extern生命放在一个单独的文件中（习惯称为头文件.h)

	定义:创建变量或分配存储单元 声明:说明变量的性质,并不分配存储单元
	越来越多的人把所有东西都作为外部变量,似乎可以简短参数表,但是这样会使关系模糊不清,外部变量还有可能意外被改
**/
