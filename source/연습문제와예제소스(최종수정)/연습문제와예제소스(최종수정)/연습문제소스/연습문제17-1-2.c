#include <stdio.h>

struct cracker                                             // 구조체 선언
{
	int price;                                             // 가격을 저장할 멤버
	int calories;                                          // 열량을 저장할 멤버
};

int main(void)
{
	struct cracker basasak;                                // 구조체 변수 선언

	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf("%d %d", &basasak.price, &basasak.calories);     // 멤버에 값 입력
	printf("바사삭의 가격 : %d원\n", basasak.price);       // 입력된 값 출력
	printf("바사삭의 열량 : %dkcal\n", basasak.calories);

	return 0;
}