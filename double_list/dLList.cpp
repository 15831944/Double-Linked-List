#include "dLList.h"

template<typename T>
void DLList<T>::addToTail(T el)
{
	if (head== 0)
	{
		head = new DLLNode(el);
		tail = head;
	}
	tail = new DLLNode(el,tail);
}

template<typename T>
void DLList<T>::addToHead(T el)
{
	if (head == 0)
	{
		tail=head = new DLLNode(el);
	}
	head = new DLLNode(el,0,head);
}