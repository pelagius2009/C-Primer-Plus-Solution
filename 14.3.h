//14.3.h

#ifndef QUEUE_H_
#define QUEUE_H_
#include <string>

template <class Type>
class Queue
{
private:
	struct Node {Type item; struct Node * next;};
	enum {Q_SIZE = 10};
	Node * front;
	Node * rear;
	int items;
	const int qsize;
	Queue(const Queue & q) : qsize(0){} 
	Queue & operator = (const Queue & q){return *this;}
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Type & item);
	bool dequeue(Type & item);

};

template <class Type>
Queue<Type>::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	// or nullptr
	items = 0;
}


template <class Type>
Queue<Type>::~Queue()
{
	Node * temp;
	while (front != NULL)
	// while queue is not yet empty
{
	temp = front;
	// save address of front item
	front = front->next;// reset pointer to next item
	delete temp;
	// delete former front
}
}


template <class Type>
bool Queue<Type>::isempty() const
{
	return items == 0;
}

template <class Type>
bool Queue<Type>::isfull() const
{
	return items == qsize;
}

template <class Type>
int Queue<Type>::queuecount() const
{
	return items;
}
// Add item to queue


template <class Type>
bool Queue<Type>::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node; // create node
	// on failure, new throws std::bad_alloc exception
	add->item = item;
	// set node pointers
	add->next = NULL;
	// or nullptr;
	items++;
	if (front == NULL)
		// if queue is empty,
		front = add;
		// place item at front
	else
		rear->next = add;
	// else place at rear
	rear = add;
	// have rear point to new node
	return true;
}

// Place front item into item variable and remove from queue


template <class Type>
bool Queue<Type>::dequeue(Type & item)
{
	if (front == NULL)
		return false;
	item = front->item;
	// set item to first item in queue
	items--;
	Node * temp = front;
	// save location of first item
	front = front->next;
	// reset front to next item
	delete temp;
	// delete former first item
	if (items == 0)
		rear = NULL;
	return true;
}

class Worker
// an abstract base class
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n)
	: fullname(s), id(n) {}
	virtual ~Worker() = 0;
	// pure virtual destructor
	virtual void Set();
	virtual void Show() const;
};

Worker::~Worker() {}
void Worker::Set()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show() const
{
	cout << "Name: " << fullname << "\n";
	cout << "Employee ID: " << id << "\n";
}



#endif
