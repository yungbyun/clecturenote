#include <stdio.h>

#define SWAP(type, a, b) { type temp; temp = a; a = b; b = temp; }

int main(void)
{
	int a = 10, b = 20;
	double da = 1.5, db = 3.4;

	SWAP(int, a, b);
	SWAP(double, da, db);

	printf("a : %d, b : %d\n", a, b);
	printf("da : %.1lf, db : %.1lf\n", da, db);

	return 0;
}