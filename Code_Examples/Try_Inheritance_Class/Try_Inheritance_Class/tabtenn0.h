#pragma once
#ifndef TABTENN0_H
#define TABTENN0_H
#include "pch.h"
#include <string>

using namespace std;

class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hastable;

public:
	TableTennisPlayer(const string & fn = "none", const string & ln = "none", const bool & ht = false);
	~TableTennisPlayer();
	void Name() const;
	bool hasTable() const { return hastable; };
	void ResetTable(bool v) { hastable = v; };

};

class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;

public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none",
		const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	unsigned int Rating() const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};




#endif // !TABTENN0_H

