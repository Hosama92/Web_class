#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "collum.h"

using namespace std;
void collum::list_up(int num)
{
	
	int i,j;

	now now;
	for_write_result[0].number = now.date();
	switch (num) {
		case 1:
		{
			cout << "권종을 선택하세요." << endl;
			for (i = 0; i < 2; i++)
			{
				cout << i + 1 << ". " << ticket_kind[i] << endl;
			}
			cin >> j;
			strcpy(for_write_result[1].word,ticket_kind[j-1]); //결과값 배열 2번째에 티켓종류를 넣어줌
			break;
		}
		case 2:
		{
			cout << "주민번호를 입력하세요." << endl;
			cin >> j;
			for_write_result[2].number = j;
			break;
		}
		case 3:
		{
			cout << "몇개를 주문하시겠습니까?" << endl;
			break;
		}
		case 4:
		{
			cout << "우대사항을 선택하세요." << endl;
			for (i = 0; i < 5; i++)
			{
				cout << i + 1 << ". " << preferential[i] << endl;
			}
			break;
		}
		case 5:
		{
			cout << "가격은 " << price << "원 입니다."
				<< endl << "감사합니다."
				<< endl << "계속 발권 하시겠습니까?"
				<< endl << "1. 티켓 발권"
				<< endl << "2. 종료" << endl;
			break;
		}
	}
}

void collum::receipt()
{
	cout << "티켓 발권을 종료합니다." << endl << endl;
	cout << "======================= 에버랜드 =======================" << endl;
}

int  now::date() {
	int real_time = ((t->tm_year + 1900) * 10000)+((t->tm_mon + 1)*100)+ t->tm_mday;
	return real_time;
}

void collum::for_test()
{
	cout << for_write_result[0].number << endl;
	cout << for_write_result[1].word << endl;
	/*cout << for_write_result[2].word << endl;
	cout << for_write_result[3].number << endl;
	cout << for_write_result[4].number << endl;
	cout << for_write_result[5].word << endl;*/
	
}