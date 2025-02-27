/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(message.h)                                                 */
/* BINDTOOL_HEADER_FILE_HASH(8ecc63fb1ecfafb071e0ce0352591b0d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25/message.h>
// pydoc.h is automatically generated in the build directory
#include <message_pydoc.h>

void bind_message(py::module& m)
{

    using message = ::gr::op25::message;


    py::class_<message, std::shared_ptr<message>>(m, "message", D(message))

        .def(py::init(&message::make),
             py::arg("type") = 0,
             py::arg("arg1") = 0,
             py::arg("arg2") = 0,
             py::arg("length") = 0,
             D(message, make))


        .def_static("make_from_string",
                    &message::make_from_string,
                    py::arg("s"),
                    py::arg("type") = 0,
                    py::arg("arg1") = 0,
                    py::arg("arg2") = 0,
                    D(message, make_from_string))


        .def("type", &message::type, D(message, type))


        .def("arg1", &message::arg1, D(message, arg1))


        .def("arg2", &message::arg2, D(message, arg2))


        .def("set_type", &message::set_type, py::arg("type"), D(message, set_type))
        .def("set_arg1", &message::set_arg1, py::arg("arg1"), D(message, set_arg1))
        .def("set_arg2", &message::set_arg2, py::arg("arg2"), D(message, set_arg2))
        .def("msg", &message::msg, D(message, msg))

        .def("length", &message::length)
        // .def("to_string",&message::to_string)
        // pybind11 needs explicit conversion to handle non-utf8 strings
        .def("to_string",
             [](std::shared_ptr<message> msg) {
                 std::string s = msg->to_string();
                 return py::bytes(s); // Return the data without transcoding
             })


        ;


    m.def("message_ncurrently_allocated",
          &::gr::op25::message_ncurrently_allocated,
          D(message_ncurrently_allocated));
    m.def("message_from_string",
          &message::make_from_string,
          py::arg("s"),
          py::arg("type") = 0,
          py::arg("arg1") = 0,
          py::arg("arg2") = 0);
}
