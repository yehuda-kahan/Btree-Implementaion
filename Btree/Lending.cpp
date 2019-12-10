#include "Lending.h"


bool Lending::operator == (const Lending& rhs)
{
	if (_client == rhs._client && _id == rhs._id && _date == rhs._date && _code == rhs._code)
		return true;
	else
		return false;
}

bool Lending::operator != (const Lending& rhs)
{
	return !(*this == rhs);
}

bool Lending::operator >= (const Lending& rhs) const
{
	if (_date >= rhs._date)
		if (_date == rhs._date)
			if (_code >= rhs._code)
				if (_id == rhs._id)
					if (_id == rhs._id)
						return true;
					else
						return false;
				else
					return true;
			else
				return false;
		else
			return true;
	else
		return false;
}

bool Lending::operator < (const Lending& rhs) const
{
	return !((*this) >= rhs);
}

bool Lending::operator <= (const Lending& rhs) const
{
	if (_date <= rhs._date)
		if (_date == rhs._date)
			if (_code <= rhs._code)
				if (_id == rhs._id)
					if (_id == rhs._id)
						return true;
					else
						return false;
				else
					return true;
			else
				return false;
		else
			return true;
	else
		return false;
}

bool Lending::operator > (const Lending& rhs) const
{
	return !((*this) <= rhs);
}

istream& operator>>(istream& is, Lending& l)
{
	cout << "enter id name date item ";
	is >> l._id >> l._client >> l._date >> l._code;
	return is;
}

ostream& operator<<(ostream& os, Lending& l)
{
	os << endl << "Lending details: id: " << l._id << " name: " << l._client << " date: " << l._date << " item: " << l._code << endl;
	return os;
}

void Lending::set_date(string str)
{
	_date = str;
}