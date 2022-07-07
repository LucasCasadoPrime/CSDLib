# Specify the minimum version.
cmake_minimum_required(VERSION 3.20)

# Specify the project info.
project(CSDLib VERSION 1.0.0 DESCRIPTION "Usefull C library to make your project faster and easier")

set(CSD "CSDLib/")

# Declare the library target.
add_library(${PROJECT_NAME} SHARED
    "CSDLib/src/array_int_management.c"
    "CSDLib/src/array_str_management.c"
    "CSDLib/src/file_management.c"
    "CSDLib/src/generic_system_linked_list.c"
    "CSDLib/src/string_management.c"
    "CSDLib/includes/CSDLib.h"
    "CSDLib/includes/array_int_management.h"
    "CSDLib/includes/array_str_management.h"
    "CSDLib/includes/file_management.h"
    "CSDLib/includes/generic_system_linked_list.h"
    "CSDLib/includes/string_management.h"
)

# Set the version property.
set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})

# Set the shared object version property to the project's major version.
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

# Configure the directories to search for header files.
target_include_directories(${PROJECT_NAME} PRIVATE includes)

# Set the public header property to the one with the actual API.
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER
    "CSDLib/includes/CSDLib.h;CSDLib/includes/array_int_management.h;CSDLib/includes/array_str_management.h;CSDLib/includes/file_management.h;CSDLib/includes/generic_system_linked_list.h;CSDLib/includes/string_management.h")

# For access to standard installation directory variables (CMAKE_INSTALL_xDIR).
include(GNUInstallDirs)

# Set library shared object and API header file to install.
install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/CSDLib
)