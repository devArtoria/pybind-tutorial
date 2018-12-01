#ifndef CORE_MYVECTOR_HPP
#define CORE_MYVECTOR_HPP

#include<vector>

class MyVector
{
private:
	std::vector<int> x;
	std::vector<int> x_;
public:
	MyVector(std::vector<int> _x);
	void setX(std::vector<int> _x);
	std::vector<int> getX();
};

#endif