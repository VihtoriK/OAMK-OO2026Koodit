cmake_minimum_required(VERSION 3.16)

project(random_generator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(random_generator main.cpp
    random.cpp
    random.h)

include(GNUInstallDirs)
install(TARGETS random_generator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
