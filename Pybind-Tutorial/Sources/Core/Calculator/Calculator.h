#ifndef CORE_CALCULATOR_H
#define CORE_CALCULATOR_H

class Calculator
{	
public:
	int storedData;
	Calculator();
	static int multiply(int x, int y);
	static int add(int x, int y);
	static int subtract(int x, int y);
	void store_data(int data);
};
#endif // CORE_CALCULATOR_H
