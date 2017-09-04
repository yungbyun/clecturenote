#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "bananajuice";

	strcpy(str, "apple");
	str[5] = '-';
	puts(str);

	return 0;
}