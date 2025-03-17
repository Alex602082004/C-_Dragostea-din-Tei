cmake_minimum_required(VERSION 3.27)
project(dragostea_din_tei)

set(CMAKE_CXX_STANDARD 17)

add_executable(dragostea_din_tei main.cpp
        manuscris.h
        repo.h
        service.h
        UI.h)
