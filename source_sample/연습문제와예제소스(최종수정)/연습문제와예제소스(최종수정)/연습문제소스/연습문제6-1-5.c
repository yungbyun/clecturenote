#include <stdio.h>

int main(void)
{
	int pos;                          // 양수를 입력할 변수
	int sum = 0;                      // 입력한 양수를 누적할 변수, 반드시 0으로 초기화

	scanf("%d", &pos);                // 양수 입력
	while (pos > 0)                   // 입력한 값이 0보다 크면 반복
	{
		sum += pos;                   // 입력한 값을 sum에 누적
		scanf("%d", &pos);            // 다시 입력을 반복한다.
	}
	printf("누적된 값 : %d\n", sum);  // 반복이 끝난 후에 누적된 값 출력

	return 0;
}