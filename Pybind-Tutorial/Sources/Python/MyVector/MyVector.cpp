#include <Core/MyVector/MyVector.hpp>
#include <Python/MyVector/MyVector.hpp>

#include <vector>
#include <pybind11/pybind11.h>

void AddMyVector(pybind11::module& m)
{
	pybind11::class_<MyVector>(m, "MyVector")
		.def(pybind11::init<std::vector<int> &>())
		.def("get_x", &MyVector::getX)
		.def("set_x", &MyVector::setX);
}
