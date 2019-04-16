#include "pch.h"
#include <iostream>
#include "queue.h"

Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::enqueue(const Item & item)
{
	if (isfull())
	{
		std::cout << "The stack is full" <<std::endl;
		return false;
	}
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}
	rear = add;
	return true;
}

bool Queue::dequeue(Item &item)
{
	if (front == NULL)
	{
		return false;
	}

	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		rear = NULL;
	}
	return true;
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

void Queue::Show() const
{
	using std::endl;
	using std::cout;
	if (isempty())
	{
		std::cout << "The queue is empty!" << endl;
		return;
	}
	Node * temp = front;
	while (temp != NULL)
	{
		cout << temp->item << " ";
		temp = temp->next;
	}
	return;
}
