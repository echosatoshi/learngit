/**
共同体是一种特殊的数据类型，允许在相同的内存位置存储不同的数据类型，可以定义一个带有多成员的共同体，但是任何时候只能有一个成员带有值，提供了一种使用相同的内存位置的有效方式
**/

//定义共同体
union [union tag]
{
	member definition;
	member definition;
	...
	member definition;
}[one or more union variable];

union Data
{
	int i;
	float f;
	char str[20];
}data;

int main()
{
	union Data data;
	printf("%d", sizeof(data));
	data.i = 10;
	printf("%d", sizeof(data.i));
	data.f = 22.2;
	printf("%.2f", data.f);
	strcpy(data.str, "c program");
	printf("%s", data.str);

}
	
