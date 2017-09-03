//////////////////////////////////////////////////////////////////////////////////////////
//  < 로또번호 수동입력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // 구입한 게임수를 저장하는 변수

void keyin_mynum_input(int (*mynum)[7])
{
	int nums[6] = {0};
	int n, i;
	char yn;
	
	printf("\n[ 수동 번호 입력 ]\n\n");
	
	while(1)
	{
		printf("# 회차를 입력하세요(종료 -1) : ");
		scanf("%d", &n);
		getchar();
		if(n == -1) break;
	
		while(1)
		{
			printf("<%d회> 번호를 입력하세요 : ", n);
			for(i = 0; i < 6; i++)
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
		mynum[cnt][0] = n;
		for(i = 0; i < 6; i++)
		{
			mynum[cnt][i+1] = nums[i];
		}
		cnt++;
		printf("# %d게임이 저장되었습니다!\n\n", cnt);
	}	
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
}