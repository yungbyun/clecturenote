//////////////////////////////////////////////////////////////////////////////////////////
//  < 추첨번호와 배당금액 화면출력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // 추첨한 게임수를 저장하는 변수

void lotdata_display(int (*lotnum)[8], double (*lotmoney)[6])
{
	int i, j;
	
	printf("\n[ 추첨번호와 배당금액 출력 ]\n\n");
	for(i = 0; i < lcnt; i++)
	{
		printf("[%3d회차] ", lotnum[i][0]);
		for(j = 1; j < 7; j++)
		{
			printf("%4d", lotnum[i][j]);
		}
		printf(" (보너스 %d)\n", lotnum[i][7]);
		printf("@@ 배당금액 : ");
		for(j = 1; j < 6; j++)
		{
			printf("%12.0lf", lotmoney[i][j]);
		}
		printf("\n\n");
	}
	
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
}