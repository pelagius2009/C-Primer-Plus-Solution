//12.4.cpp

// stack.cpp -- Stack member functions
//#include "stack.h"

#include "12.4.h"
/*
Stack::Stack()
// create an empty stack
{
pitems = Item * new [MAX];
top = 0;
}
*/
bool Stack::isempty() const
{
return top == 0;
}
bool Stack::isfull() const
{
return top == MAX;
}
bool Stack::push(const Item & item)
{
	if (top < MAX)
{
//items[top++] = item;
pitems[top++] = item;
return true;
}
else
return false;
}
bool Stack::pop(Item & item)
{
if (top > 0)
{
//item = items[--top];
	item = pitems[--top];
return true;
}
else
return false;
}
Stack::Stack(int n)
{
pitems = new Item[n];
top = 0;
size = 0;
}
Stack::Stack(const Stack & st)
{
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	size = st.size;
	top = st.top;
}
Stack::~Stack()
{
	delete [] pitems;
}

Stack & Stack:: operator = (const Stack & st)
{
	if (this == &st)
		return *this;
	delete [] pitems;
	size = st.size;
	top = st.top;
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	return *this;
}



