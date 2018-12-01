#include <Core/MyVector/MyVector.hpp>
#include <vector>

MyVector::MyVector(std::vector<int> _x) : x(_x) { }

void MyVector::setX(std::vector<int> _x)
{
	x = _x;
}

std::vector<int> MyVector::getX()
{
	return x;
}


