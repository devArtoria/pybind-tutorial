#ifndef CORE_CALCULATOR_H
#define CORE_CALCULATOR_H

class Calculator
{	
public:
	int storedData;
	Calculator();
	int multiply(int x, int y);
	int add(int x, int y);
	int subtract(int x, int y);
	void store_data(int data);
};
#endif // CORE_CALCULATOR_H
