#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int *pa = &a, *pb = &b, *pt;

	pt = pa;
	pa = pb;
	pb = pt;
	printf("%d, %d", *pa, *pb);

	return 0;
}