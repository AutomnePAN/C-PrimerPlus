#include "pch.h"
#include <iostream>
#pragma once

#ifndef STACK_H_
#define STACK_H_


typedef unsigned long Item;
class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack is already full
	bool push(const Item & item);
	bool pop(Item & item);
	~Stack();

private:
	enum {MAX = 5};
	Item items[MAX];
	int top;
};

#endif // !STACK_H_

