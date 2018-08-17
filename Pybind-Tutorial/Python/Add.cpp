#include <pybind11/pybind11.h>
#include <../Sources/Pybind-Tutorial.h>

PYBIND11_MODULE(pybind11Test, m)
{
	m.doc() =
		R"pbdoc(
			pybind11 test
		)pbdoc";

	m.def("add", &add, "A function which adds two numbers");

	m.def("divide", &divide, "A function which divides two numbers", 
		pybind11::arg("i") = 6, pybind11::arg("j") = 3);

	pybind11::class_<Util>(m, "Util")
		.def("multi", &Util::multi)
		.def("hello", &Util::hello)
		.def("family", &Util::family, pybind11::arg("wife"), pybind11::arg("husband"))
		.def(pybind11::init<>());
}