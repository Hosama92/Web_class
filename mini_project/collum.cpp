#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "collum.h"

using namespace std;
void collum::list_up(int num)
{
	
	int i,j;
	total_pirce = 0;
	__int64 k;

	collum collum;
	now now;
	for_write_result[0].number = now.date();
	while (1) {
		switch (num) {
			case 1:
			{
				cout << "권종을 선택하세요." << endl;
				for (i = 0; i < 2; i++)
				{
					cout << i + 1 << ". " << ticket_kind[i] << endl;
				}
				cin >> j;
				cout << "" << endl;
				strcpy(for_write_result[1].word, ticket_kind[j - 1]); //결과값 배열 2번째에 티켓종류를 넣어줌
				ticket_kind_check_num = j-1; // 0 or 1
				//break;
				
			}
			case 2:
			{
				cout << "주민번호를 입력하세요." << endl;
				cin >> k;
				cout << "" << endl;
				strcpy(for_write_result[2].word, age_kind[age_checker(k)]);
				age_kind_check_num = age_checker(k);
				//printf("age_kind_check_num = %d", age_kind_check_num);
				//break;
			}
			case 3:
			{
				cout << "몇개를 주문하시겠습니까?" << endl;
				cin >> j;
				cout <<""<< endl;
				price = j * ticket_price[age_kind_check_num][ticket_kind_check_num];
				for_write_result[3].number = j;
				//printf("price = %d", price);
				//break;
				
			}
			case 4:
			{
				cout << "우대사항을 선택하세요." << endl;
				//{없음,장애인,국가유공자,다자녀,임산부}
				for (i = 0; i < 5; i++)
				{
					cout << i + 1 << ". " << preferential[i] << endl;
				}
				cin >> j;
				cout << "" << endl;
				price = (price*preferential_sale_rate[j - 1])/100;
				strcpy(for_write_result[5].word, preferential[j-1]);
				//break;
			}
			case 5:
			{

				total_pirce += price;
				cout << "가격은 " << price << "원 입니다."
					<< endl << "감사합니다."
					<< endl << "계속 발권 하시겠습니까?"
					<< endl << "1. 티켓 발권"
					<< endl << "2. 종료" << endl;
				cin >> j;
				cout << "" << endl;
				if (j == 1) {
					for_break_check = false;
				}
				else if(j == 2){
					for_write_result[4].number = price;
					for_break_check = true;
				}
				//break;
			}
					
		}
			if (for_break_check == true)
			{
				break;
			}
			else
			{
				continue;
			}
	}
}
//for_write_result[6] = {날짜, 권종, 연령구분, 수량, 가격, 우대사항}
void collum::receipt()
{
	cout << "" << endl;
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
	cout << for_write_result[2].word << endl;
	cout << for_write_result[3].number << endl;
	cout << for_write_result[4].number << endl;
	cout << for_write_result[5].word << endl;
	//
}

int collum::age_checker(__int64 personal_num) //9207081032911 0007081032911
{
	now now;
	collum collum;
	__int64 birth_date,age;
	if (((personal_num / 1000000) % 10) == 2 || ((personal_num / 1000000) % 10) == 1) {
		birth_date = (personal_num / 10000000) +19000000;
	}
	else
	{
		birth_date = (personal_num / 10000000) + 20000000;
	}
	//printf("personal_num = %ld \n", personal_num);
	//printf("personal_num/10000000 = %ld \n", personal_num / 10000000);
	//printf("birth_date = %ld \n", birth_date);
	//printf("now.date = %ld \n", now.date());
	age = (now.date() - birth_date)/10000;
	if (age <= 2) {
		return 4;
	}
	else if (age > 2 && age <= 12)
	{
		return 2;
	}
	else if (age > 12 && age <= 18)
	{
		return 1;
	}
	else if (age > 18 && age <= 64)
	{
		return 0;
	}
	else
	{
		return 3;
	}
}

