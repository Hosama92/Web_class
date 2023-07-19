#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdio.h>

union WordOrNumber {
	char word[50]; 
	int number;    
};

class collum {
private:
	int price,total_pirce;
	WordOrNumber for_write_result[6];
	char ticket_kind[2][10] = { "주간권","야간권" };
	char age_kind[5][15] = { "대인","청소년","소인","경로","유아(무료)" };
	int ticket_price[4][2] = { {56000,46000},{47000,40000},{44000,37000},{44000,37000} };
	char preferential[5][50] = { "없음 (나이 우대는 자동처리)","장애인","국가유공자","다자녀","임산부" };
public:
	void list_up(int num);
	void receipt();	
	void for_test();
};

class now {
	private:
		time_t timer=time(NULL);;
		struct tm* t = localtime(&timer);;
	public:
		int date();	
};