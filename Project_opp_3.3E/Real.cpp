#define _USE_MATH_DEFINES
#include "Real.h"
#include <iostream>
#include <cmath>
using namespace std;

Real::Real() :Number()
{}
Real::Real(double x) : Number(x)
{}
Real::Real(const Real& m) : Number(m)
{}
double operator ^(const Real& r, double value)
{
	double result;
	if (r.GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{
		result = 1;
	}
	else
	{
		result = pow(r.GetX(), 1 / value);
	}
	return result;
}
double Real::Power(double value)
{
	return pow(M_PI, value);
}