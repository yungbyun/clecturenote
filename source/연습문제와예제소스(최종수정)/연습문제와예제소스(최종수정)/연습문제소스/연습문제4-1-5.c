#include <stdio.h>

int main(void)
{
	int dodo, gogo;             // 또또면과 꽁꽁바의 구입금액 저장
	int total, change, rest;    // 총 구입금액과 잔돈, 임시 변수 선언
	int w500, w100, w50, w10;   // 각 금액단위 동전의 개수를 저장할 변수

	dodo = 70 * 2;              // 또또면 구입가격 계산, 또또면 70원짜리 2개
	gogo = 30 * 3;              // 꽁꽁바 구입가격 계산, 꽁꽁바 30원짜리 3개
	total = dodo + gogo;        // 전체 구입 총액 계산
	change = 1000 - total;      // 거스름돈 계산
	w500 = change / 500;        // 몫 연산자를 사용하여 500원 동전의 개수 계산
	rest = change % 500;        // 500원을 거슬러주고 남은 잔돈을 임시 보관
	w100 = rest / 100;          // 남은 잔돈에서 100원 동전의 개수 계산
	rest = rest % 100;          // 100원을 거슬러주고 남은 잔돈을 임시 보관
	w50 = rest / 50;
	rest = rest % 50;
	w10 = rest / 10;

	printf("또또면 전체 금액 : %d원\n", dodo);
	printf("꽁꽁바 전체 금액 : %d원\n", gogo);
	printf("거스름돈 : %d원\n", change);
	printf("거스름돈 동전의 최소 개수...\n");
	printf(" 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", w500, w100, w50, w10);

	return 0;
}