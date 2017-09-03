#include <stdio.h>

int main(void)
{
	int ary[] = {10, 20, 30, 40, 50};
	int size = sizeof(ary) / sizeof(ary[0]);
	int *pa = ary;
	int *pb = ary + (size - 1);
	int temp, i;

	while (pa < pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}