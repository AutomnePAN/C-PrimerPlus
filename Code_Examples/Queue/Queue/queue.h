#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_

typedef int Item;

class Queue
{
public:
	Queue(int qs = Q_size);
	Queue(const Queue & q) :qsize(0) {}
	Queue & operator=(const Queue &q) { return *this; }
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item);
	bool dequeue(Item & item);
	void Show() const;

private:
	enum {Q_size = 10};
	struct Node
	{
		Item item;
		struct Node * next;
	};
	Node *front;
	Node *rear;
	int items;
	const int qsize;
};


#endif // !QUEUE_H_

