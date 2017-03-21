#include <stdio.h>

//定义常量1#define
#define LENGTH 0
#define WIDTH 0
#define NEWLINE '\n'

int main()
{
	//const type var = value
	const int con = 10;

	int area;
	area = LENGTH*WIDTH;
	printf("value of area: %d", area);
	printf("%c", NEWLINE);

	return 0;
}
