#include <iostream>
#include <stdio.h>
#include "dLList.h"


using namespace std;

int main()
{
	DLList<int> my_list;
	my_list.addToTail(100);
	my_list.addToHead(200);
	return 0;
}