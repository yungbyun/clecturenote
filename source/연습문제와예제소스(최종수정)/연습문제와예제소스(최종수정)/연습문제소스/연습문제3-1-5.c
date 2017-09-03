#include <stdio.h>

int main(void)
{
	char name[20] = "홍길동";                // char 배열을 선언하고 이름 초기화
	int age = 17;                            // 나이 초기화
	double height = 190.0;                   // 키 초기화
	char blood_type[3] = "AB";               // 혈액형 초기화, 배열의 크기는 최소 3 이상

	printf("10년 후의 프로필...\n");         // 단순 출력 메시지
	age = age + 10;                          // 현재 나이에 10을 더한다.
	height = height - 0.5;                   // 키는 0.5cm 줄어듬
	printf("이름 : %s\n", name);             // 이름 출력
	printf("나이 : %d살\n", age);            // 나이 출력
	printf("키 : %.1lfcm\n", height);        // 키 출력
	printf("혈액형 : %s형\n", blood_type);   // 혈액형 출력

	return 0;
}