#ifndef DLLIST_H_
#define DLLIST_H

template<typename T>
class DLList;			//declaration of template class (must exist)

template <typename T>
class DLLNode
{
public:
	//friend class DLList<T>;		//friend class 
	DLLNode() : prev(0), next(0) {};
	DLLNode(T el, DLLNode *plast = 0, DLLNode *pnext = 0) : prev(plast), next(pnext), info(el) {};
	friend void DLList<T>::showAll();	//friend class function
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
	void showAll();
private:
	DLLNode<T> *head, *tail;
};

//***********template class declare and definition must be exist one file together***//

template<typename T>
void DLList<T>::addToTail(T el)
{
	if (head == 0)
	{
		head = new DLLNode<T>(el);
		tail = head;
	}
	tail = new DLLNode<T>(el, tail);
}

template<typename T>
void DLList<T>::addToHead(T el)
{
	if (head == 0)
	{
		tail = head = new DLLNode<T>(el);
	}
	head = new DLLNode<T>(el, 0, head);
}

template<typename T>
void DLList<T>::showAll()
{
	for (DLLNode<T> *tmp = head ; tmp != tail->next; tmp = tmp->next)
	{
		cout << tmp->info << endl;
	}
}
#endif DLLIST_H