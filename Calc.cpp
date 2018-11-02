#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void MenuDisplay() {
	printf("다음 메뉴 중 하나를 선택하세요.\n");
	printf("-------------------------------\n");
	printf("1. 더하기\n");
	printf("2. 빼기\n");
	printf("3. 곱하기\n");
	printf("4. 나누기\n");
	printf("q. 종료 \n");
}
void Before() {
	system("cls");
	printf("두 수를 입력하세요.\n");
}
void After() {
	printf("아무 키나 누루세요");
	getchar();
	getchar();
	system("cls");
}
void Add() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
}
void Sub() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d - %d = %d\n", a, b, a - b);
}
void Mul() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d * %d = %d\n", a, b, a * b);
}
void Div() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d / %d = %f\n", a, b, (double)a / b);
}
void ShowIntro() {
	printf("계산기 프로그램 프로그램에 오신 걸 환영합니다!");
	Sleep(3000);
	system("cls");
}
void GetUserInputProcess() {
	char ch = _getch();
	int a = 0, b = 0;
	switch (ch) {
	case 'q':
		exit(1);
	case '1':
		Before();
		Add();
		After();
		break;
	case '2':
		Before();
		Sub();
		After();
		break;
	case '3':
		Before();
		Mul();
		After();
		break;
	case '4':
		Before();
		Div();
		After();
		break;
	}
}
void Run() {
	ShowIntro();

	while (1) {
		MenuDisplay();
		GetUserInputProcess();
	}
}
