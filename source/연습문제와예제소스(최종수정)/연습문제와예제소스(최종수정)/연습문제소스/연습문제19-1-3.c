#include <stdio.h>
#define DEBUG
#define LEVEL 2

int main(void)
{
	int flag;

#ifndef DEBUG
	flag = 0;
#elif LEVEL == 1
	flag = 1;
#elif defined(MAX_LEVEL) && (LEVEL == 2)
	flag = 2;
#else
	flag = 3;
#endif
	printf("%d", flag);

	return 0;
}