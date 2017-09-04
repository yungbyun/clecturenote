#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, temp;
	int *pa = &a;
	int *pb = &b;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("a : %d, b : %d\n", a, b);

	return 0;
}
