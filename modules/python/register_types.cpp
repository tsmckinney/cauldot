#include "register_types.h"

void initialize_python_module(ModuleInitializationLevel p_level){
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
    {
        return;
    }
}
void uninitialize_python_module(ModuleInitializationLevel p_level){
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
    {
        return;
    }
}