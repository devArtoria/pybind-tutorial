#include <Core/Calculator/Calculator.h>
#include <Python/Calculator/Calculator.h>

#include <pybind11/pybind11.h>

namespace py = pybind11;

void AddCalculator(pybind11::module& m)
{
	py::class_<Calculator>(m, "Calculator")
		.def(py::init<>())
		.def_readwrite("stored_data", &Calculator::storedData)
		.def("multiply", &Calculator::multiply
		/*py::arg("x"), py::arg("y")*/)
		.def("add", &Calculator::add)
		.def("subtract", &Calculator::subtract)
		.def("store_data", &Calculator::store_data);
}

