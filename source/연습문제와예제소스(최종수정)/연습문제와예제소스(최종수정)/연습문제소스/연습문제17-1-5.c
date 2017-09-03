#include <stdio.h>

struct student                               // 학생 구조체
{
	int num;                                 // 학번
	char name[20];                           // 이름
	int score[5];                            // 점수 배열
	double avg;                              // 평균
};
struct student print_avg(struct student s);

int main(void)
{
	struct student s1                        // 구조체 변수의 선언과 초기화
		= { 315, "홍길동", {82, 93, 74, 90, 65} };

	s1 = print_avg(s1);                      // 구조체 변수 전달, 반환값 저장
	printf("평균 : %.1lf\n", s1.avg);        // 함수가 계산한 평균 출력

	return 0;
}

// 구조체 변수의 데이터를 출력하고 평균 계산
struct student print_avg(struct student s)   // 매개변수와 반환형은 모두 구조체
{
	int i, sum = 0;

	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	printf("점수 : ");

	for (i = 0; i < 5; i++)
	{
		printf("%5d", s.score[i]);           // 배열 멤버의 값 출력
		sum += s.score[i];                   // 총점 계산
	}
	printf("\n");
	s.avg = sum / 5.0;                       // 평균 계산

	return s;                                // 평균이 계산된 구조체 변수 반환
}