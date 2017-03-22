#include <stdio.h>

//for 符号常量

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}

/**
#define 名字 值 //注意没有分号

C语言中一个通用规则的实例:在允许使用某种类型变量值的任何场合,都可以使用该类型的更复杂的表达式
printf的第三个参数必须是与%6.1f匹配的浮点数，所以可以在此处使用任何浮点表达式

for(初始化;条件;增加步长)

在实际编程中,可以使用while和for的任一种,主要看使用哪一种更清晰
for适合初始化和增加步长都是单条语句并且逻辑相关的情形
**/
