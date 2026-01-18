cmake_minimum_required(VERSION 3.16)

project(Pankkitilit LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Pankkitilit main.cpp
    tilit.h
    tilit.cpp
    asiakas.cpp
    asiakas.h)

include(GNUInstallDirs)
install(TARGETS Pankkitilit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
