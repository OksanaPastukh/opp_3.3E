#include "Real.h"
#include<iostream>
using namespace std;
int main()
{
	Number a(1);
	cout << "count = " << Number::Count() << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Real c;
	cin >> c;
	cout << c << endl;
	Real k;
	cin >> k;
	cout << k << endl;
	Number d = c - k;
	Number f = k * c;
	cout << " Remove " << d << endl;
	cout << " Multiplication  " << f << endl;
	Real r;
	cin >> r;
	cout << r << endl;
	double value;
	double power;
	cout << " Enter the power for the roots = "; cin >> value;
	double g = r ^ value;
	cout << "The root of a given power = " << g << endl;
	cout << " Enter the power  = "; cin >> power;
	cout << "Pi to the power equals  =  " << r.Power(power) << endl;
	cout << "count = " << Object::Count() << endl;
	cin.get();
	return 0;
}