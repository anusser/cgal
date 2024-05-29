
cmake_minimum_required(VERSION 3.1...3.23)
project(Scripts)

find_package(CGAL REQUIRED)

create_single_source_cgal_program("natvis.cpp")
