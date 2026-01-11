cmake_minimum_required(VERSION 3.16)

project(Italialainen_kokki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Italialainen_kokki main.cpp
    chefs.h
    chef.cpp
    italianChef.cpp)

include(GNUInstallDirs)
install(TARGETS Italialainen_kokki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
