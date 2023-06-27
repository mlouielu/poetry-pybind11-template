//
//
// Copyright (c) 2023 Louie Lu <louielu@cs.unc.edu>
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted (subject to the limitations in the disclaimer
// below) provided that the following conditions are met:
//
//      * Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
//
//      * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//      * Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from this
//      software without specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//

#include <pybind11/numpy.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;


struct Register {
    Register(double a, double b) : a(a), b(b) {}

    double a;
    double b;
};

double add_register(const Register &reg)
{
    return reg.a + reg.b;
}

template <typename N>
py::array_t<N> add_array(const py::array_t<N> &a, const py::array_t<N> &b)
{
    return a + b;
}


PYBIND11_MODULE(poetry_pybind11_template_ext, m)
{
    m.doc() = "Poetry/Pybind11 template";
    m.def("add_register", &add_register, "Add from register");
    m.def("add_array", &add_array<double>, "Add from numpy array");
    py::class_<Register>(m, "Register")
        .def(py::init<double, double>())
        .def_readwrite("a", &Register::a)
        .def_readwrite("b", &Register::b);
}
