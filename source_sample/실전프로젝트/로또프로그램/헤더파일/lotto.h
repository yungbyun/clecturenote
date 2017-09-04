#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


// 메인 메뉴를 출력하고 선택된 메뉴 번호를 리턴하는 함수

int menu_disp();                                   


// 구입한 로또번호를 입력하고 확인하는 함수

void auto_mynum_input(int (*mynum)[7]);            // 자동 로또번호 입력
void keyin_mynum_input(int (*mynum)[7]);           // 수동 로또번호 입력
void file_mynum_input(int (*mynum)[7]);            // 파일 로또번호 입력
void mynum_display(int (*mynum)[7]);               // 입력한 로또번호 화면출력


// 추첨한 로또번호와 배당금액을 입력하고 확인하는 함수

void keyin_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6]);
void file_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6]);
void lotdata_display(int (*lotnum)[8], double (*lotmoney)[6]);


// 당첨결과를 출력하는 함수

void winning_display(int (*mynum)[7], int (*lotnum)[8], double (*lotmoney)[6]);  // 당첨금액 출력


// 추가로 필요한 함수 

void num_generator(int *nums, int cnt);            // nums배열에 cnt개의 난수 저장
int is_here(int *nums, int val, int cnt);          // nums배열에 val의 값이 있는지 cnt개의 배열요소 검사
int num_counter(int *mynum, int *lotnum);          // mynum과 lotnum배열에 일치하는 번호의 개수 리턴
int get_index(int num, int (*lotnum)[8]);          // lotnum배열에서 num이 몇 번째 행에 있는지 index리턴 