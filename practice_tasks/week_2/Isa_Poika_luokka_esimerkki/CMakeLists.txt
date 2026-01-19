cmake_minimum_required(VERSION 3.16)

project(Isa_Poika_luokka_esimerkki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Isa_Poika_luokka_esimerkki main.cpp
    father.cpp
    father.h
    son.h son.cpp)

include(GNUInstallDirs)
install(TARGETS Isa_Poika_luokka_esimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
