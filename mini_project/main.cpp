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
	}
	return 0;
}