#include <stdio.h>

enum { NUMBER = 1, PHONE_NUMBER };     // NUMBER는 1, PHONE_NUMBER는 2

typedef union
{
	int num;                           // 숫자 형식
	char phone[20];                    // 전화번호 형식
} Password;

int main(void)
{
	Password my_pw;                    // 공용체 변수 선언
	int sel;

	printf("1. 숫자 4자리\n");
	printf("2. 전화번호\n");
	printf("원하는 비밀번호 입력방식 : ");
	scanf("%d", &sel);

	printf("비밀번호 입력 : ");
	switch (sel)
	{
	case NUMBER: scanf("%d", &my_pw.num); break;            // 숫자를 선택한 경우
	case PHONE_NUMBER : scanf("%s", my_pw.phone); break;    // 전화번호 선택
	}

	printf("입력한 비밀번호 : ");
	switch (sel)
	{
	case NUMBER: printf("%d", my_pw.num); break;
	case PHONE_NUMBER : printf("%s", my_pw.phone); break;
	}

	return 0;
}