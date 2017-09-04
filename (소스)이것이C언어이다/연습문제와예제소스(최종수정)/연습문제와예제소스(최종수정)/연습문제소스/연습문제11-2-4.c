#include <stdio.h>

int main(void)
{
	int num;
	char alpha;

	printf("가장 좋아하는 숫자는? ");
	scanf("%d", &num);
	fflush(stdin);        // 숫자를 입력한 후에 버퍼에 남아 있는 개행문자를 제거한다.
	printf("가장 좋아하는 알파벳은? ");
	alpha = getchar();
	printf("%d, %c\n", num, alpha);

	return 0;
}