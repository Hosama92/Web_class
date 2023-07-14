#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "restaruant.h"

Tableinfo::Tableinfo(int x, int y)
{
	tablenumber = tableNO[x][y];
	printf("%d번 테이블", tablenumber);
}

void Delivery::carry(int a)
{
	if (a == 1) {
		printf("음식을 들어올린다");
	}
	else if (a == 2) {
		printf("음식을 내려놓는다");
	}
	else {
		printf("정지상태");
	}
}

void Delivery::gotable(int table)
{
	printf("%d번 테이블로 이동", table);
}

void Delivery::backcounter()
{
	printf("카운터로 복귀");
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
		printf("서비스를 제공한다");
	}
}

void  Clear::