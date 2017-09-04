#include <stdio.h>

extern void set_key(int);
extern int get_key(void);

int key;

int main(void)
{
	int res;

	set_key(10);
	key = get_key();
	set_key(20);
	res = key + get_key();
	printf("%d", res);

	return 0;
}