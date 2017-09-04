#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;                      // 파일 포인터
	int num;                       // 학번
	char name[20];                 // 이름
	int age;                       // 나이
	double height;                 // 키
	char addr[80];                 // 주소

	fp = fopen("data.txt", "w");   // 쓰기 전용으로 파일 개방
	if (fp == 0)                   // 개방 여부 검사
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		printf("학번 : ");
		scanf("%d", &num);                       // 학번 입력
		if (num < 0) break;                      // 음수면 입력 종료
		fflush(stdin);                           // 입력 스트림 버퍼를 비움

		printf("이름 : ");
		fgets(name, sizeof(name), stdin);        // 이름 입력
		name[strlen(name) - 1] = '\0';           // 개행문자 제거

		printf("나이 : ");
		scanf("%d", &age);                       // 나이 입력

		printf("키 : ");
		scanf("%lf", &height);                   // 키 입력
		fflush(stdin);

		printf("주소 : ");
		fgets(addr, sizeof(addr), stdin);
		addr[strlen(addr) - 1] = '\0';

		fprintf(fp, "%d\n ", num);               // 개방한 파일로 학번 출력
		fprintf(fp, "%s ", name);                // 이름 출력
		fprintf(fp, "%d %.1lf\n", age, height);  // 나이와 키 출력
		fprintf(fp, "%s\n", addr);               // 주소 출력
	}
	fclose(fp);                                  // 개방한 파일 닫음

	return 0;
}