#include <iostream>
#include <stdio.h>
#include "dLList.h"


using namespace std;

int main()
{
	DLList<int> my_list;
	my_list.addToTail(100);
	my_list.addToHead(200);
	my_list.addToHead(300);
	my_list.addToHead(400);
	my_list.showAll();
	return 0;
}