//////////////////////////////////////////////////////////////////////////////////////////
//  < 로또번호 자동입력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // 구입한 게임수를 저장하는 변수

void auto_mynum_input(int (*mynum)[7])
{
	int nums[6] = {0};
	int n, i;
	char yn;
	
	printf("\n[ 자동 번호 입력 ]\n\n");
	
	while(1)
	{
		printf("# 회차를 입력하세요(종료 -1) : ");
		scanf("%d", &n); 
		getchar();
		if(n == -1) break;
		
		while(1)
		{
			num_generator(nums, 6);  // 로또 번호 자동 생성기
			
			printf("<%d회> 자동번호 : ", n);
			for(i = 0; i < 6; i++)
			{
				printf("%4d", nums[i]);
			}
			printf("\n이 번호를 선택하시겠습니까(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') ) break;
			printf("다른 번호를 생성합니다!\n\n");
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
