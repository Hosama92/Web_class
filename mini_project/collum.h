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
	int price, total_pirce, age_kind_check_num, ticket_kind_check_num; 
	bool for_break_check;
	WordOrNumber for_write_result[6];
	char ticket_kind[2][10] = { "�ְ���","�߰���" };
	char age_kind[5][15] = { "����","û�ҳ�","����","���","����(����)" };
	int ticket_price[4][2] = { {56000,46000},{47000,40000},{44000,37000},{44000,37000} };
	char preferential[5][50] = { "����","�����","����������","���ڳ�","�ӻ��" };
	int preferential_sale_rate[5] = { 100,60,50,80,85 };
public:
	void list_up(int num);
	void receipt();	
	void list_to_receipt(); //����Ʈ���� ���������� ���� �ѱ�� �Լ�
	int age_checker(__int64 personal_num);
	void for_test();
};

class now {
	private:
		time_t timer=time(NULL);;
		struct tm* t = localtime(&timer);;
	public:
		int date();	
};