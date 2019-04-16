#include "pch.h"
#include "tabtenn0.h"
#include <iostream>
using namespace std;

TableTennisPlayer::TableTennisPlayer(const string & fn , const string & ln , const bool & ht )
{
	lastname = ln;
	firstname = fn;
	hastable = ht;
}

TableTennisPlayer::~TableTennisPlayer()
{

}

void TableTennisPlayer::Name() const
{
	cout << "First name: "<< firstname <<"\n"<<"Last Name"<<lastname <<std::endl;
}


RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp): TableTennisPlayer(tp), rating(r)
{

}