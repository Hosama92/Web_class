#define _crt_secure_no_warnings
#include <stdio.h>
#include <iostream>
#include "collum.h"


int main() {
	collum pro;
	
	pro.list_up(1);
	pro.list_up(2);
	//pro.list_up(3);
	//pro.list_up(4);
	//pro.list_up(5);

	/*now now;
	printf("%d", now.date());*/
	pro.for_test();
	return 0;
}