#include <stdio.h>

void input_score(int *, int *, int *);  // 세 과목의 점수를 입력하는 함수
int total(int, int, int);               // 총점을 구하는 함수
double grade(int);                      // 평균과 학점을 구하는 함수
char grd;                               // 학점을 저장할 전역 변수

int main(void)
{
	int kor, eng, mat, tot;             // 국어, 영어, 수학, 총점을 저장할 변수
	double avg;                         // 평균을 저장할 변수

	input_score(&kor, &eng, &mat);      // 입력 함수 호출
	tot = total(kor, eng, mat);         // total 함수를 호출하여 총점 반환
	avg = grade(tot);                   // 평균은 반환하고 학점은 전역 변수에 저장
	printf("평균 : %.1lf, 학점 : %c", avg, grd); // 결과값 출력

	return 0;
}