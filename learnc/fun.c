/*函数定义*/
return_type func_name(parameter_list)
{
	body of the function
}

int max(int a, int b)
{
	int result; //局部变量声明
	if(a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}

/*函数声明*/
return_type func_name(parameter_list);

/*函数调用*/
#include <stdio.h>

//函数声明
int max(int num1, int num2);

//函数定义
int max(int num1, int num2)
{
	//局部变量声明
	int result;
	if(num1 > num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return result;
}
int main()
{
	int a = 100;
	int b = 200;
	int ret;

	ret = max(a, b);
	return ret;
}

/*函数参数 传值 &传引用*/
