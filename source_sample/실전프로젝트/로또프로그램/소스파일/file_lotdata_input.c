//////////////////////////////////////////////////////////////////////////////////////////
//  < 추첨번호와 배당금액 파일입력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // 추첨한 게임수를 저장하는 변수

void file_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6])
{
	FILE *nfp, *mfp;
	char name[20];
	char yn;
	int num, res, i, lcnt_temp;
	double money;

	lcnt_temp = lcnt;

	while(1)
	{
		printf("# 추첨번호 파일이름을 입력하세요 : ");
		scanf("%s", name);
		getchar();
		nfp = fopen(name, "r");

		if(nfp == NULL)
		{
			printf("@ 해당 파일이 없습니다!\n");
			printf("# 계속 입력하시겠습니까(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'n') || (yn == 'N') ) 
			{
				return;
			}
		}
		else
		{
			printf("@ 해당 파일을 찾았습니다!\n");
			Sleep(1500);
			break;
		}
	}

	res = fscanf(nfp, "%d", &num);

	while(res != EOF)
	{
		lotnum[lcnt][0] = num;
		for(i = 1; i < 8; i++)
		{
			fscanf(nfp, "%d", &num);
			lotnum[lcnt][i] = num;
		}
		lcnt++;
		res = fscanf(nfp, "%d", &num);
	}
	printf("# 추첨번호 파일의 내용을 모두 읽었습니다!\n");
	fclose(nfp);

	lcnt = lcnt_temp;

	while(1)
	{
		printf("\n# 배당금액 파일이름을 입력하세요 : ");
		scanf("%s", name);
		getchar();
		mfp = fopen(name, "r");
		if(mfp == 0)
		{
			printf("@ 해당 파일이 없습니다!\n");
			printf("# 계속 입력하시겠습니까(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'n') || (yn == 'N') )
			{
				return;
			}
		}
		else
		{
			printf("@ 해당 파일을 찾았습니다!\n");
			Sleep(1500);
			break;
		}
	}

	res = fscanf(mfp, "%lf", &money);

	while(res != EOF)
	{
		lotmoney[lcnt][0] = money;
		for(i = 1; i < 6; i++)
		{
			fscanf(mfp, "%lf", &money);
			lotmoney[lcnt][i] = money;
		}
		lcnt++;
		res = fscanf(mfp, "%lf", &money);
	}
	printf("# 배당금액 파일의 내용을 모두 읽었습니다!\n");
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
	fclose(mfp);
}