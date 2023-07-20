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
	int price,count, total_pirce, age_kind_check_num, ticket_kind_check_num; 
	bool for_break_check;
	WordOrNumber for_write_result[6];
	WordOrNumber receipt_from_list[30][5];
	char ticket_kind[2][10] = { "주간권","야간권" };
	char age_kind[5][15] = { "대인","청소년","소인","경로","유아(무료)" };
	int ticket_price[4][2] = { {56000,46000},{47000,40000},{44000,37000},{44000,37000} };
	char preferential[5][50] = { "없음","장애인","국가유공자","다자녀","임산부" };
	int preferential_sale_rate[5] = { 100,60,50,80,85 };
public:
	void list_up(int num);
	void receipt();	
	void list_to_receipt(int num); //리스트에서 영수증으로 정보 넘기는 함수
	int age_checker(__int64 personal_num);
	void for_CSV();
	void for_test();
};

class now {
	private:
		time_t timer=time(NULL);;
		struct tm* t = localtime(&timer);;
	public:
		int date();	
};