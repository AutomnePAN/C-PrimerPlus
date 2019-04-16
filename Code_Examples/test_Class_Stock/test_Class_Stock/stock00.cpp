#include "pch.h"
#include "stock00.h"
#include <iostream>


Stock::Stock()
{
	company = "no_name";
	share = 0;
	share_value = 0;
	total_value = 0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0) {
		std::cout << "The amount of stock cannot be negative\n" ;
	}
	else
	{
		share = n;
	}
	share_value = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Bye! "<< company << std::endl;
}

void Stock::buy(long num, double price)
{
	share += num;
	share_value = price;
	set_tot();
}

void Stock::sell(long num, double price)
{
	if (num > share)
	{
		std::cout << " You can't sell more than you have! \n";

	}
	else
	{
		share -= num;
		share_value = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	if (price < 0)
	{
		std::cout << " You can't reset the price as a negative number ! " << std::endl;
	}
	else
	{
		share_value = price;
	}
	set_tot();
}

void Stock::show()
{
	std::cout << "Company: " << company << "		" << "Shares: " << share << "		" << "Share price: " << share_value << "	 " << "Total value: " << total_value << std::endl;

}

const Stock & Stock::topval(const Stock & s)const
{
	if (s.total_value > this->total_value)
	{
		return s;
	}
	else
	{
		return * this;
	}
}