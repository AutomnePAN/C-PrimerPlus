#include "pch.h"
#include <iostream>
#include "stack.h"

// Define Stack member functions


Stack::Stack()
{
	top = 0;
}

Stack::~Stack()
{
	std::cout << "Destroyed! " << std::endl;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top >= MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
	{
		return false;
	}
}