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
	char ticket_kind[2][10] = { "�ְ���","�߰���" };
	char age_kind[5][15] = { "����","û�ҳ�","����","���","����(����)" };
	int ticket_price[4][2] = { {56000,46000},{47000,40000},{44000,37000},{44000,37000} };
	char preferential[5][50] = { "���� (���� ���� �ڵ�ó��)","�����","����������","���ڳ�","�ӻ��" };
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