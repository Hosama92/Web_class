#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "restaruant.h"

Tableinfo::Tableinfo(int x, int y)
{
	tablenumber = tableNO[x][y];
	printf("%d�� ���̺�", tablenumber);
}

void Delivery::carry(int a)
{
	if (a == 1) {
		printf("������ ���ø���");
	}
	else if (a == 2) {
		printf("������ �������´�");
	}
	else {
		printf("��������");
	}
}

void Delivery::gotable(int table)
{
	printf("%d�� ���̺�� �̵�", table);
}

void Delivery::backcounter()
{
	printf("ī���ͷ� ����");
}

void Order::calculateorder(int b,int table)
{
	
	if (b == 1)
	{
		tableprice[table] += menuNO_PRICE[1][orderedNO];
	}
	else if (b == 0)
	{
		tableprice[table] = 0;
	}
}

void Claim::checkclaim(int table)
{
	if (claimavailable == true)
	{
		claiminfo[table] = 1;
	}
	else
	{
		claiminfo[table] = 0;
	}
}

void Claim::afterservice(int table)
{
	if (claiminfo[table] == 1)
	{
		printf("���񽺸� �����Ѵ�");
	}
}

void  Clear::