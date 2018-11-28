#ifndef DLLIST_H_
#define DLLIST_H

template <typename T>
class DLLNode
{
public:
	DLLNode() : prev(0), next(0) {};
	DLLNode(T el, DLLNode *plast = 0, DLLNode *pnext = 0) : prev(plast), next(pnext), info(el) {};
private:
	DLLNode *prev, *next;
	T info;
};

template <typename T>
class DLList
{	
public:
	DLList(): head(0), tail(0){};
	void addToTail(T el);		//insert data after tail
	void addToHead(T el);		//insert data before head
private:
	DLLNode<T> *head, *tail;
};

#endif DLLIST_H