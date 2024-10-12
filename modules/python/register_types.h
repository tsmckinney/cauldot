#ifndef PYTHON_REGISTER_TYPES_H
#define PYTHON_REGISTER_TYPES_H

#include "modules/register_module_types.h"

void initialize_python_module(ModuleInitializationLevel p_level);
void uninitialize_python_module(ModuleInitializationLevel p_level);


#endif