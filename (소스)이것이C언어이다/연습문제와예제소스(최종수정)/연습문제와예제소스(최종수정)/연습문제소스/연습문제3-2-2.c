#include <stdio.h>

int main(void)
{
	char fruit[20];
	int cnt;

	printf("좋아하는 과일 : ");
	scanf("%s", fruit);
	printf("몇 개 : ");
	scanf("%d", &cnt);
	printf("%s를 %d개 드립니다.", fruit, cnt);

	return 0;
}