#pragma once
#ifndef WORKER0_H_
#define WORKER0_H_
#include "pch.h"
#include <iostream>
#include <string>
#include <valarray>


class Worker
{
private:
	std::string name;
	long id;
public:
	Worker():name("No name"), id() {}
	explicit Worker(const std::string & s) :name(s), id() {}
	explicit Worker(const long n) : name("Name Unknown"), id(n) {}
	Worker(const std::string & s, const long n) : name(s), id(n) {}
	virtual ~Worker() {}
	virtual void Set();
	virtual void Show() const;
};

class Waiter : public Worker
{
private:
	int panache;

public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string & s, long n, int p = 0)
		: Worker(s, n), panache(p) {}
	Waiter(const Worker & wk, int p = 0)
		: Worker(wk), panache(p) {}
	void Set();
	void Show() const;

};


class Singer : public Worker
{
protected:
	enum {
		other, alto, contralto, soprano,
		bass, baritone, tenor
	};
	enum { Vtypes = 7 };
private:
	static const char *pv[Vtypes]; // string equivs of voice types
	int voice;

public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string & s, long n, int v = other)
		: Worker(s, n), voice(v) {}
	Singer(const Worker & wk, int v = other)
		: Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};




#endif // !WORKER0_H_
