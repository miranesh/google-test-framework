#include "mathfunc.h"

int factorial(int n)
{
	int res = 1; 
	for (int i = 2; i <= n; i++) {
		res = res * i;
	}
	return res;
}

float divAtoB(float a, float b)
{
	return a / b; 
}

bool isPositiv(int n)
{
	return (n > 0);
}

std::string reverseStr(std::string str)
{
	std::reverse(str.begin(), str.end());
	return str;
}
