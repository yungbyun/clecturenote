//////////////////////////////////////////////////////////////////////////////////////////
//  < 당첨금액 화면출력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // 구입한 게임수를 저장하는 변수

void winning_display(int (*mynum)[7], int (*lotnum)[8], double (*lotmoney)[6])
{
	FILE *fp;
	double res = 0;
	int nums;
	int i, j, index, rank;

	fp = fopen("result.txt", "w");
	if(fp == NULL)
	{
		printf("# 출력파일 생성 실패...");
		getch();
		return;
	}

	printf("\n[ 당첨금액 출력 ]\n\n");
	for(i = 0; i < cnt; i++)
	{
		index = get_index(mynum[i][0], lotnum);
		if(index < 0)
		{
			printf("# %d회차는 아직 추첨하지 않았습니다!\n", mynum[i][0]);
			continue;
		}
		nums = num_counter(mynum[i] + 1, lotnum[index] + 1);
		if(nums < 3)
		{
			continue;
		}
		if(nums == 6)
		{
			rank = 1;
		}
		else if( (nums == 5) && is_here(mynum[i] + 1, lotnum[index][7], 6))
		{
			rank = 2;
		}
		else if(nums == 5)
		{
			rank = 3;
		}
		else if(nums == 4)
		{
			rank = 4;
		}
		else if(nums == 3)
		{
			rank = 5;
		}

		res += lotmoney[index][6-rank];
		fprintf(fp, "[%3d회차] ", mynum[i][0]);
		for(j = 1; j < 7; j++)
		{
			fprintf(fp, "%4d", mynum[i][j]);
		}
		fprintf(fp, "  < %d등 > - %.0lf\n", rank, lotmoney[index][6-rank]);
		fprintf(fp, "=> 추첨번호 : ");
		for(j = 1; j < 8; j++)
		{
			fprintf(fp, "%4d", lotnum[index][j]);
		}
		fprintf(fp, "\n\n");
	}
	
	printf("# 총 당첨금은 : %.0lf원 입니다!\n", res);
	fprintf(fp, "# 총 당첨금은 : %.0lf원 입니다!\n", res);
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
	fclose(fp);
}