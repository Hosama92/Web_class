#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "collum.h"
#include <fstream>

using namespace std;
void Collum::list_up(int num)
{
	Collum collum;
	Now now;
	 
	int i,j; 
	count = 0;
	total_pirce = 0;
	__int64 k;
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
			}
			case 2:
			{
				cout << "주민번호를 입력하세요." << endl;
				cin >> k;
				cout << "" << endl;
				strcpy(for_write_result[2].word, age_kind[age_checker(k)]);
				age_kind_check_num = age_checker(k);
			}
			case 3:
			{
				cout << "몇개를 주문하시겠습니까?" << endl;
				cin >> j;
				cout <<""<< endl;
				price = j * ticket_price[age_kind_check_num][ticket_kind_check_num];
				for_write_result[3].number = j;
			}
			case 4:
			{
				cout << "우대사항을 선택하세요." << endl;
				for (i = 0; i < 5; i++)
				{
					cout << i + 1 << ". " << preferential[i] << endl;
				}
				cin >> j;
				cout << "" << endl;
				price = (price*preferential_sale_rate[j - 1])/100;
				strcpy(for_write_result[5].word, preferential[j-1]);
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
				for_write_result[4].number = price;
				if (j == 1) {
					for_break_check = false;
				}
				else if(j == 2){
					for_break_check = true;
				}
			}
			case 6:
			{
				for_CSV();
			}
		}
		list_to_receipt(count);
		if (for_break_check == true)
		{
			break;
		}
		else
		{
			count++;
			continue;
		}
	}
}

void Collum::receipt()
{
	int num;
	cout << "" << endl;
	cout << "티켓 발권을 종료합니다. 감사합니다." << endl << endl;
	cout << "======================= 에버랜드 =======================" << endl;
	for (num = 0; num <= count; num++)
	{
		cout << receipt_from_list[num][0].word << "\t" << receipt_from_list[num][1].word << "  " << "x\t" << receipt_from_list[num][2].number<<"\t"<< receipt_from_list[num][3].number << "원" << "         " << "*우대적용 : " << receipt_from_list[num][4].word << endl;
	}
	cout << "" << endl;
	cout << "입장료 총액은 " <<total_pirce<<"원 입니다."<< endl;
	cout << "====================================================" << endl;
	cout << "" << endl;
	cout << "계속 진행(1: 새로운 주문, 2: 프로그램 종료) : ";
}

void Collum::list_to_receipt(int num)
{
	strcpy(receipt_from_list[num][0].word, for_write_result[1].word);
	strcpy(receipt_from_list[num][1].word, for_write_result[2].word);
	receipt_from_list[num][2].number = for_write_result[3].number;
	receipt_from_list[num][3].number = for_write_result[4].number;
	strcpy(receipt_from_list[num][4].word, for_write_result[5].word);
}

void Collum::for_CSV()
{
	ofstream outputFile("receipt.csv", ios_base::app);
	if (!outputFile.is_open()) {
		cerr << "파일을 열 수 없습니다." << endl;
	}
	
	outputFile << for_write_result[0].number << ",";
	outputFile << for_write_result[1].word << ",";
	outputFile << for_write_result[2].word << ",";
	outputFile << for_write_result[3].number << ",";
	outputFile << for_write_result[4].number << ",";
	outputFile << for_write_result[5].word << endl;
	
	outputFile.close();

	std::cout << "CSV 파일에 저장되었습니다." << std::endl;
}

int  Now::date() {
	int real_time = ((t->tm_year + 1900) * 10000)+((t->tm_mon + 1)*100)+ t->tm_mday;
	return real_time;
}

int Collum::age_checker(__int64 personal_num)
{
	Now now;
	Collum collum;
	__int64 birth_date,age;
	if (((personal_num / 1000000) % 10) == 2 || ((personal_num / 1000000) % 10) == 1) {
		birth_date = (personal_num / 10000000) +19000000;
	}
	else
	{
		birth_date = (personal_num / 10000000) + 20000000;
	}
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

