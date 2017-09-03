#include <stdio.h>

int main(void)
{
	char *ps = "banana";

	while (*ps != '\0')
	{
		printf("%s\n", ps);
		ps++;
	}

	return 0;
}