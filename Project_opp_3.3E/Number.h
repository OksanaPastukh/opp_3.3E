#pragma once
#include "Object.h"
#include <string> 
#include <sstream>
using namespace std;
class Number :public Object
{
	double x;
public:
	Number();
	Number(double);
	Number(const Number&);
	~Number();

	double GetX() const { return x; }
	void SetX(double value) { x = value; }

	Number& operator = (const Number&);
	operator string() const;
	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);
	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);
	friend Number operator - (const Number&, const Number&);
	friend Number operator * (const Number&, const Number&);
};

