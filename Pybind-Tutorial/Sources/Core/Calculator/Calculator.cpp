#include "Calculator.h"

Calculator::Calculator() : storedData(0) {}

int Calculator::multiply(int x, int y)
{
	return x * y;
}

int Calculator::add(int x, int y)
{
	return x + y;
}

int Calculator::subtract(int x, int y)
{
	return x - y;
}

void Calculator::store_data(int data) 
{
	this->storedData = data;
}