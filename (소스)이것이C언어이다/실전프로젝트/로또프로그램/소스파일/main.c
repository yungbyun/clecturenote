//////////////////////////////////////////////////////////////////////////////////////////
//  < 메인함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

int cnt = 0;                   // 구입한 게임수를 저장하는 변수
int lcnt = 0;                  // 추첨한 게임수를 저장하는 변수

int main(void)
{
	int mynum[100][7];       // 구입한 로또번호 저장, 회차 포함 최대 100게임
	int lotnum[10][8];       // 추첨한 로또번호 저장(회차와 보너스번호 포함), 최대 10회차
	double lotmoney[10][6];  // 배당금액 저장(5등부터 1등까지, 회차 포함), 최대 10회차
	
	int sel;
	
	while(1)
	{
		sel = menu_disp();
		if(sel == 9)
		{
			break;
		}
		
		switch(sel)
		{
			case 1: auto_mynum_input(mynum); break;
			case 2: keyin_mynum_input(mynum); break;
			case 3: file_mynum_input(mynum); break;
			case 4: mynum_display(mynum); break;
			case 5: keyin_lotdata_input(lotnum, lotmoney); break; 
			case 6: file_lotdata_input(lotnum, lotmoney); break;
			case 7: lotdata_display(lotnum, lotmoney); break;
			case 8: winning_display(mynum, lotnum, lotmoney); break;
		}
	}

	return 0;
}