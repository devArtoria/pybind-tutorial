#include <Python/Calculator/Calculator.h>
#include <Python/MyVector/MyVector.hpp>
#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyCore, m)
{
	m.doc() =
		R"pbdoc(
			pybind11 test 
		)pbdoc";


	AddCalculator(m);
	AddMyVector(m);

	m.attr("__version__") = pybind11::str("Dev");
}