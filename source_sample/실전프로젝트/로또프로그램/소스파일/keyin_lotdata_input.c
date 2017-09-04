//////////////////////////////////////////////////////////////////////////////////////////
//  < 추첨번호와 배당금액 키보드입력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // 추첨한 게임수를 저장하는 변수

void keyin_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6])
{
	int nums[7] = {0};
	double money[5] = {0};
	int n, i;
	char yn;
	
	printf("\n[ 추첨번호와 배당금액 입력 ]\n\n");
	
	while(1)
	{
		printf("# 회차를 입력하세요(종료 -1) : ");
		scanf("%d", &n);
		getchar();
		if(n == -1)
		{
			break;
		}
		
		while(1)
		{
			printf("<%d회> 추첨번호를 입력하세요(보너스번호 포함 7개 입력) : ", n);
			for(i = 0; i < 7; i++)
			{
				scanf("%d", nums + i);
			}
			getchar();
			printf("입력한 번호가 맞습니까(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') )
			{
				break;
			}
			printf("다시 입력합니다!\n\n");
		}
		lotnum[lcnt][0] = n;
		for(i = 0; i < 7; i++)
		{
			lotnum[lcnt][i+1] = nums[i];
		}
		printf("%d회차 추첨번호가 저장되었습니다!\n\n", n);
		
		while(1)
		{
			printf("<%d회> 배당금액을 입력하세요(5등부터 1등까지)\n==> ", n);
			for(i = 0; i < 5; i++)
			{
				scanf("%lf", money + i);
			}
			getchar();
			printf("입력한 금액이 맞습니까(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') )
			{
				break;
			}
			printf("다시 입력합니다!\n\n");
		}
		
		lotmoney[lcnt][0] = n;
		for(i = 0; i < 5; i++)
		{
			lotmoney[lcnt][i+1] = money[i];
		}
		lcnt++;
		printf("%d회차 배당금액이 저장되었습니다!\n\n", n);
	}	
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
}