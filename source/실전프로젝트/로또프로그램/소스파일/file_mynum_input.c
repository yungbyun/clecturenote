//////////////////////////////////////////////////////////////////////////////////////////
//  < 로또번호 파일입력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // 구입한 게임수를 저장하는 변수

void file_mynum_input(int (*mynum)[7])
{
	FILE *fp;
	char name[20];
	char yn;
	int num, i;

	while(1)
	{
		printf("# 파일이름을 입력하세요 : ");
		scanf("%s", name);
		getchar();
		fp = fopen(name, "r");
		if(fp == NULL)
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

	while(fscanf(fp, "%d", &num) != EOF)
	{
		mynum[cnt][0] = num;
		for(i = 0; i < 6; i++)
		{
			fscanf(fp, "%d", &mynum[cnt][i+1]);
		}
		cnt++;
	}
	printf("# 파일의 내용을 모두 읽었습니다!\n");
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
	fclose(fp);
}