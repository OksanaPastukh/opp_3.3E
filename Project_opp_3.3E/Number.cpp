#include "Number.h"
#include <sstream>
#include <iostream>
using namespace std;
Number::Number()
{
	x = 0;
}
Number::Number(double value)
{
	SetX(value);
}
Number::Number(const Number& m)
{
	x = m.x;
}
Number::~Number()
{}
Number& Number::operator = (const Number& m)
{
	x = m.x;
	return *this;
}
Number::operator string() const
{
	stringstream ss;
	ss << "Value is " << x << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Number& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Number& m)
{
	double x;
	cout << " Enter the value =  ";in >> x;
	m.SetX(x);
	cout << endl;
	return in;
}
Number& Number::operator ++()
{
	++x;
	return *this;
}
Number& Number::operator --()
{
	--x;
	return *this;
}
Number Number::operator ++(int)
{
	Number n(*this);
	x++;
	return n;
}
Number Number::operator --(int)
{
	Number n(*this);
	x--;
	return n;
}
Number operator - (const Number& n, const Number& m)
{
	return Number(n.x - m.x);
}
Number operator * (const Number& n, const Number& m)
{
	return Number(n.x * m.x);
}