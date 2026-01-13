cmake_minimum_required(VERSION 3.16)

project(mittari LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mittari main.cpp
    random.cpp
    random.h
    dht.h
    dht.cpp
    lcd.cpp
    lcd.h
    mittari.cpp
    mittari.h
)

include(GNUInstallDirs)
install(TARGETS mittari
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
