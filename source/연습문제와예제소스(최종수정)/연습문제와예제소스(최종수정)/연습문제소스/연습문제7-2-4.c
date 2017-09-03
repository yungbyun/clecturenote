#include <stdio.h>

int disp_menu(void);                               // 함수 선언

int main(void)
{
	int sel;

	sel = disp_menu();                             // 괄호만을 사용하여 호출, 반환값은 sel에 저장한다.
	printf("선택된 메뉴는 %d번 입니다.\n", sel);   // 반환값 출력

	return 0;
}

int disp_menu(void)                                // 매개변수는 없고 정수를 반환한다.
{
	int sel;                                       // 선택한 메뉴 번호를 저장할 변수

	printf("=====< 메뉴 >=====\n\n");              // 메뉴 출력
	printf("1. 볶음짬뽕\n");
	printf("2. 콩나물국밥\n");
	printf("3. 바지락칼국수\n\n");
	printf("# 메뉴를 선택하세요 : ");
	scanf("%d", &sel);                             // 메뉴 선택

	return sel;                                    // 선택한 메뉴 번호를 반환한다.
}