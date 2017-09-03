#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *ifp, *ofp;                           // 파일 포인터
	char name[20];                             // 이름
	double weight;                             // 체중
	double height;                             // 키
	double m_height;                           // 미터로 환산한 키
	double bmi;                                // 신체 질량 지수

	ifp = fopen("a.txt", "r");                 // 입력 파일 개방
	if (ifp == NULL)                           // 파일이 없으면 프로그램 종료
	{
		printf("파일이 없습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");                 // 출력 파일 개방
	if (ofp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	fgets(name, sizeof(name), ifp);            // 첫 번째 줄 이름 입력
	name[strlen(name) - 1] = '\0';             // 개행문자 제거

	fscanf(ifp, "%lf %lf", &weight, &height);  // 체중과 키 입력
	m_height = height / 100.0;                 // 키를 m단위로 환산
	bmi = weight / (m_height * m_height);      // 신체 질량 지수 계산

	fprintf(ofp, "이름 : %s, BMI : %.1lf\n", name, bmi);           // 이름, BMI출력
	fprintf(ofp, "체중 : %.1lfkg, 키 : %.1lfcm", weight, height);  // 몸무게, 키 출력

	fclose(ifp);                               // 파일 닫음
	fclose(ofp);

	return 0;
}
