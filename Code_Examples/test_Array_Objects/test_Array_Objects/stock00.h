#pragma once
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
private:
	std::string company;
	long share;
	double share_value;
	double total_value;
	void set_tot()
	{
		total_value = share_value * share;
	}

public:
	Stock();
	Stock(const std::string &co, long n = 0 , double pr = 0);
	~Stock();
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s ) const;
};


#endif // STOCK00_H_
