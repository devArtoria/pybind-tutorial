#include <Python/Calculator/Calculator.h>
#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyCore, m)
{
	m.doc() =
		R"pbdoc(
			pybind11 test 
		)pbdoc";


	AddCalculator(m);

	m.attr("__version__") = pybind11::str("Dev");
}