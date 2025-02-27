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
/* BINDTOOL_HEADER_FILE(msg_queue.h)                                               */
/* BINDTOOL_HEADER_FILE_HASH(8720fe1ee321d7736ff21220c52c9966)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25_repeater/msg_queue.h>
// pydoc.h is automatically generated in the build directory
#include <msg_queue_pydoc.h>

void bind_msg_queue(py::module& m)
{

    using msg_queue = ::gr::op25::msg_queue;


    py::class_<msg_queue, gr::op25::msg_handler, std::shared_ptr<msg_queue>>(
        m, "msg_queue", D(msg_queue))

        .def(py::init(&msg_queue::make), py::arg("limit") = 0, D(msg_queue, make))


        .def("handle", &msg_queue::handle, py::arg("msg"), D(msg_queue, handle))


        .def("insert_tail",
             &msg_queue::insert_tail,
             py::arg("msg"),
             D(msg_queue, insert_tail))


        .def("delete_head", &msg_queue::delete_head, py::call_guard<py::gil_scoped_release>(), D(msg_queue, delete_head))


        .def("delete_head_nowait",
             &msg_queue::delete_head_nowait,
             D(msg_queue, delete_head_nowait))


        .def("flush", &msg_queue::flush, D(msg_queue, flush))


        .def("empty_p", &msg_queue::empty_p, D(msg_queue, empty_p))


        .def("full_p", &msg_queue::full_p, D(msg_queue, full_p))


        .def("count", &msg_queue::count, D(msg_queue, count))


        .def("limit", &msg_queue::limit, D(msg_queue, limit))

        ;


    py::module m_thread = m.def_submodule("thread");
}
