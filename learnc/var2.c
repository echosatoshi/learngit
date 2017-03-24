//数组数据结构

//声明
type arrayName[arraySize]
double balance[10]

//初始化
double balance[5] = {1.1, 1.2, 1.3, 1.4, 1.5}
double balance[] = {1.1, 1.2, 1.3, 1.4, 1.5}
balance[1] = 10.0;

//访问数组
double salary = balance[1]

//指针（动态分配内存，每个变量都有一个内存地址，每个内存地址可用&访问）
int main()
{
	int a = 1;
	char b = 'a';

	printf("a的内存地址%x", &a);
	printf("b的内存地址%x", &b);
	return 0;
}

//指针是一个变量，它的值是另一个变量的内存地址
/**
相关操作
1可以对指针进行+- ++ --
2可以定义存储指针的数组
3指针的指针
4通过引用或地址传值
5从函数返回指针
**/
type* varName
int main()
{
	int var = 20;
	int* p;
	int* ptr = NULL; //空指针
	p = &var;

	printf("address of var %x \n", &var);
	//指针变量中存储的地址
	pirntf("address of var %x \n", p);
	//通过指针访问变量的值
	printf("value of var %d \n", *p);
}

