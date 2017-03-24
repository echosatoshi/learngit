#include <stdio.h>
/**
递归：函数调用自身
**/
void printd(int n)
{
	if(n < 0)
	{
		putchar('-');
		n = -n;
	}
	if(n/10)
	{
		printd(n/10);
	}
	putchar(n%10+'0');
}

//快排

void swap(int v[], int i, int j);
void qsort(int v[], int left, int right)
{
	int i, last;
	if(left >= right)
		return;
	swap(v, left, (left+right)/2);
	last = left;
	for(i = left + 1; i<=right; i++)
	{
		if(v[i] < v[left])
		{
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}
void swap(int v[], int i, int j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}

