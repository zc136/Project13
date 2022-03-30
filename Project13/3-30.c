#include<stdio.h>
int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*p的值为:%f\n", *p);
	*p = 9.0;
	printf("num的值:%d\n", n);
	printf("*p的值:%f\n", *p);
	return 0;

}