#define _crt_secure_no_warnings
#include <stdio.h>
#include <iostream>
#include "collum.h"


int main() {
	collum pro;
	now now;
	int i;
	while (1)
	{
		pro.list_up(1);
		//pro.list_up(2);
		//pro.list_up(3);
		//pro.list_up(4);
		//pro.list_up(5);

		//printf("%d", now.date());
		pro.for_test();
		pro.receipt();
		std::cin >> i;
		if (i == 1)
		{
			continue;
		}
		else if (i == 2)
		{
			break;
		}
		//printf("%d",pro.age_checker(9207081032911));

	}
		return 0;
}