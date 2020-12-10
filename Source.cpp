#include<iostream>
#include<math.h>
using namespace std;


/******************************************************************************
* This program will compute double integrals in rectangular coordinates.
* Only works for simple functions so far.
******************************************************************************/
float Upper(float x)
{
	// Type in your inside upper bounds here
	float function = pow(x,2);
	return function;
}

float Lower(float x)
{
	// Type in your inside lower bounds here
	float function = x;
	return function;
}

float calculate(float low, float up, float powu, float powl)
{
	float value = 0;
	float u = ((Upper(up) * up) / (powu + 1)) -((Lower(up) * up) / (powl + 1));
	float l = ((Upper(low) * low) / (powu + 1)) - ((Lower(low) * low) / (powl + 1));
	value = u - l;
	return value;
}

int main()
{
	float ou, ol, powu, powl;
	cout << "Ouside bounds: " << endl << "What is your lower bounds? ";
	cin >> ol;
	cout << "What is your upper bounds? ";
	cin >> ou;
	cout << "Inside Bounds: " << endl << "What power is your lower bounds raised to? ";
	cin >> powl;
	cout << "What power is your upper bounds raised to? ";
	cin >> powu;

	float ans = calculate(ol, ou, powu, powl);
	cout << "The area of your integral is equal to " << ans;
}