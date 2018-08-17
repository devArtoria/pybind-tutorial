#include <iostream>
#include <string>

using namespace std;


int add(int a, int b);

float divide(float a, float b);

extern string PLANE;

class Util
{
public:
	int multi(int a, int b);
	string hello(string a);
	string family(string a, string b);
	static string PLANE;
};