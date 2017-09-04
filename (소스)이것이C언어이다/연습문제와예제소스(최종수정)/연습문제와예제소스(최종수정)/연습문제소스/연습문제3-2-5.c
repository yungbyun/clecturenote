#include <stdio.h>

int main(void)
{
	char name[20];                      // 이름을 저장할 배열
	int age;                            // 나이를 저장할 변수
	double height;                      // 키를 저장할 변수

	printf("이름 입력 : ");             // 입력 안내 메시지
	scanf("%s", name);                  // 배열명으로 이름 입력, &가 없음
	printf("나이와 키(cm) 입력 : ");
	scanf("%d %lf", &age, &height);     // 변환문자를 연속으로 사용하여 입력
	printf("%s, %d살, %.1lfcm", name, age, height);   // 입력된 값 출력

	return 0;
}