#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)      // 한 줄에 $를 5번 출력하는 것을 3번 반복
	{
		for (j = 0; j < 5; j++)  // j는 0부터 4까지 5번 반복
		{
			printf("$");         // $출력
		}
		printf("\n");            // $를 5번 출력한 후에 줄을 바꾼다.
	}

	return 0;
}