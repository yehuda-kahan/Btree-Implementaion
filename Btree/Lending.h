#pragma once
#include <string>
#include <iostream>
using namespace std;

class Lending
{
public:
	int _id;
	string _client;
	string _date;    // /year/month/day - exemple : 20/21/11
	int _code;

	void set_date(string str);
	//operators
	bool operator >= (const Lending& rhs) const;
	bool operator < (const Lending& rhs) const;
	bool operator <= (const Lending& rhs) const;
	bool operator > (const Lending& rhs) const;
	bool operator == (const Lending& rhs);
	bool operator != (const Lending& rhs);
	friend istream& operator>>(istream& is, Lending& l);
	friend ostream& operator<<(ostream& os, Lending& l);
};

