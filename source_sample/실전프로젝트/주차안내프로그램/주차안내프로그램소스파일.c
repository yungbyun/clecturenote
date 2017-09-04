/*------------------------------------------------------------------------------
 * 제목 : 주차 안내 프로그램
 * 설명 : 지하 주차장의 빈 공간을 찾아 안내한다.
 *----------------------------------------------------------------------------*/

#include <stdio.h>
enum {DOWN, UP};

int disp_menu(void);

void enter_park(int (*park_space)[2][5], int (*reserved)[3]);
void exit_park(int (*park_space)[2][5]);
void reserve_park(int (*reserved)[3]);
void print_park(int (*park_space)[2][5], int (*reserved)[3]);

void print_basement(int (*park_space)[5], int floor, int (*reserved)[3]);
int check_reservation(int (*reserved)[3], int basement, int num);
int check_reserved_num(int (*reserved)[3], int car_num, int *foor, int *resv_num);
int find_space(int (*park_space)[5], int floor, int (*reserved)[3]);

int main(void)
{
	int park_space[3][2][5] = {0};                          // 3층 2행 5열의 주차 공간
	int reserved[30][3] = {0};                              // 지정차량 목록, 최대 30대 지정 가능
	int sel;

	while(1)
	{
		sel = disp_menu();                                  // 메뉴 출력
		if(sel == 0) break;

		switch(sel)
		{
		case 1: enter_park(park_space, reserved); break;    // 주차
		case 2: exit_park(park_space); break;               // 출차
		case 3: reserve_park(reserved); break;              // 지정차량 등록 및 삭제
		case 4: print_park(park_space, reserved); break;    // 주차 목록
		default: continue;
		}
	}

	return 0;
}

// 메뉴를 출력한다.

int disp_menu(void)
{
	int sel;

	printf("1. 주차\n");
	printf("2. 출차\n");
	printf("3. 지정차량 등록\n");
	printf("4. 주차현황 출력\n");
	printf("0. 종료\n");
	printf("> 번호 선택 : ");
	scanf("%d", &sel);
	fflush(stdin);
	printf("\n");

	return sel;
}

// 주차장의 빈 곳을 찾아 주차를 안내한다.

void enter_park(int (*park_space)[2][5], int (*reserved)[3])
{
	int i, cnt;
	int park_num, car_num, direction;
	int res, floor, resv_num;

	printf("> 차번 입력(숫자 4자리) : ");
	scanf("%d", &car_num);
	res = check_reserved_num(reserved, car_num, &floor, &resv_num);
	if(res == 1)
	{
		park_space[floor - 1][(resv_num - 1) / 5][(resv_num - 1) % 5] = car_num;
		printf("@ 지정차량 : B%d층 %d번 주차했습니다.\n\n", floor, resv_num);
		return;
	}

	printf("@ 주차 가능 공간 : ");
	for(i = 0; i < 3; i++)
	{
		cnt = find_space(park_space[i], i, reserved);
		printf("B%d층[%d대]  ", i + 1, cnt);
	}
	printf("\n\n");

	i = 0;
	while(1)
	{
		print_basement(park_space[i], i, reserved);
		printf("> 주차 번호 입력(다른층 0, 취소 -1) : ");
		scanf("%d", &park_num);
		fflush(stdin);
		printf("\n");
		if(park_num == -1) return;
		if(park_num != 0) break;

		if(i == 0) direction = DOWN;
		else if(i == 2) direction = UP;

		if(direction == DOWN) i++;
		else i--;
	}

	park_space[i][(park_num - 1) / 5][(park_num - 1) % 5] = car_num;
	printf("@ 주차되었습니다!\n\n");
}

// 주차장에서 출차하고 데이터를 갱신한다.

void exit_park(int (*park_space)[2][5])
{
	int i, j, k;
	int car_num;

	printf("> 차번 입력(숫자 4자리) : ");
	scanf("%d", &car_num);

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			for(k = 0; k < 5; k++)
			{
				if(car_num == park_space[i][j][k])
				{
					park_space[i][j][k] = 0;
					printf("@ 출차되었습니다.\n\n");
					return;
				}
			}
		}
	}
	printf("@ 해당 차량이 없습니다.\n\n");
}

// 지정차량을 등록하고 수정한다.

void reserve_park(int (*reserved)[3])
{
	int reservation_num;
	int basement, num;
	int i, dup;
	char yn;

	while(1)
	{
		printf("> 층과 번호 입력(종료 0) : ");
		scanf("%d", &basement);
		if(basement == 0) break;
		scanf("%d", &num);
		fflush(stdin);

		dup = 0;
		for(i = 0; reserved[i][1] != 0; i++)
		{
			if((basement == reserved[i][1]) && (num == reserved[i][2]))
			{
				dup = 1;
				break;
			}
		}
		if(dup == 1)
		{
			printf("@ B%d층 %d번에 %d가 등록되어 있습니다!\n", basement, num, reserved[i][0]);
			printf("> 새 번호를 등록하시겠습니까(Y/N)? ");
			scanf("%c", &yn);
			fflush(stdin);
			if(!((yn == 'Y') || (yn == 'y')))
			{
				printf("@ 취소되었습니다.\n\n");
				continue;
			}
		}
		printf("> 등록차량 번호 입력 : ");
		scanf("%d", &reservation_num);
		reserved[i][0] = reservation_num;
		reserved[i][1] = basement;
		reserved[i][2] = num;
		printf("@ 등록되었습니다.\n\n");
	}
}

// 전체 주차 상태를 출력한다.

void print_park(int (*park_space)[2][5], int (*reserved)[3])
{
	int i;

	for(i = 0; i < 3; i++)
	{
		print_basement(park_space[i], i, reserved);
	}
}

// 한 층의 주차 상태를 출력한다.

void print_basement(int (*park_space)[5], int floor, int (*reserved)[3])   // 1개 층만 출력
{
	int i, j, num = 1;

	printf("[B%d층]============================\n", floor + 1);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(park_space[i][j] == 0)
			{
				if(check_reservation(reserved, floor + 1, num)) printf("[resv] ");
				else printf("[%3d ] ", num);
			}
			else
			{
				printf("[%d] ", park_space[i][j]);
			}
			num++;
		}
		printf("\n");
	}
	printf("\n");
}

// 해당 층, 해당 번호에 지정차량이 등록되어 있는지 확인한다.

int check_reservation(int (*reserved)[3], int basement, int num)
{
	int i;

	for(i = 0; i < 30; i++)
	{
		if((basement == reserved[i][1]) && (num == reserved[i][2])) return 1;
	}

	return 0;
}

// 원하는 차 번호가 지정차량인지 확인한다.

int check_reserved_num(int (*reserved)[3], int car_num, int *floor, int *resv_num)
{
	int i;

	for(i = 0; reserved[i][0] != 0; i++)
	{
		if(car_num == reserved[i][0])
		{
			*floor = reserved[i][1];
			*resv_num = reserved[i][2];
			return 1;
		}
	}

	return 0;
}

// 주차장의 빈 공간 수를 확인한다.

int find_space(int (*park_space)[5], int floor, int (*reserved)[3])
{
	int i, j, cnt = 0, num = 0;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 5; j++)
		{
			num++;
			if((park_space[i][j] == 0) && !check_reservation(reserved, floor + 1, num)) cnt++;
		}
	}

	return cnt;
}
