#include<stdio.h>
int main()
{
	int a, b, t=0;
	scanf_s("%d %d", &a, &b);
	printf("a=%d\tb=%d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("a=%d\tb=%d", a, b);
	return 0;
}