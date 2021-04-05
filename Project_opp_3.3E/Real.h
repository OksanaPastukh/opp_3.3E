#pragma once
#include "Number.h"
class Real : public Number
{
public:
	Real();
	Real(double);
	Real(const Real&);

	friend double operator ^ (const Real&, double value);
	static double Power(double value);
};

