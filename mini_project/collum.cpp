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
			cout << "������ �����ϼ���." << endl;
			for (i = 0; i < 2; i++)
			{
				cout << i + 1 << ". " << ticket_kind[i] << endl;
			}
			cin >> j;
			strcpy(for_write_result[1].word,ticket_kind[j-1]); //����� �迭 2��°�� Ƽ�������� �־���
			break;
		}
		case 2:
		{
			cout << "�ֹι�ȣ�� �Է��ϼ���." << endl;
			cin >> j;
			for_write_result[2].number = j;
			break;
		}
		case 3:
		{
			cout << "��� �ֹ��Ͻðڽ��ϱ�?" << endl;
			break;
		}
		case 4:
		{
			cout << "�������� �����ϼ���." << endl;
			for (i = 0; i < 5; i++)
			{
				cout << i + 1 << ". " << preferential[i] << endl;
			}
			break;
		}
		case 5:
		{
			cout << "������ " << price << "�� �Դϴ�."
				<< endl << "�����մϴ�."
				<< endl << "��� �߱� �Ͻðڽ��ϱ�?"
				<< endl << "1. Ƽ�� �߱�"
				<< endl << "2. ����" << endl;
			break;
		}
	}
}

void collum::receipt()
{
	cout << "Ƽ�� �߱��� �����մϴ�." << endl << endl;
	cout << "======================= �������� =======================" << endl;
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