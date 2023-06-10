#include "ext.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) { m.def("do_nothing", &doNothing); }
