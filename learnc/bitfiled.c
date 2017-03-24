#include <stdio.h>
#include <string.h>

/*简单定义结构*/
struct
{
	unsigned int widthValidated;
	unsigned int heightValidated;
}status1;

/*定义位域结构*/
struct
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
}status2;

int main()
{
	printf("%d", sizeof(status1));
	printf("%d", sizeof(status2));

	printf("%d", status2.widthValidated);
	return 0;
}

//位域声明
struct
{
	type [member_name] : width;
};


