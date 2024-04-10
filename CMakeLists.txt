cmake_minimum_required(VERSION 3.27)
project(DS___DAA C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(DS___DAA
        Searching.c
        Searching.h
        Binary_search.c
        Binary_search.h
        bubble_sort_v2.c
        bubble_sort_v2.h

)
add_executable(bubble_sorting
        bubble_sort.c
        bubble_sort.h
)
add_executable(bubble_sorting_v2
        bubble_sort_v2.c
        bubble_sort_v2.h
)

add_executable(selection_sort_v1
        selection_sort.c
        selection_sort.h
)

add_executable(bubble_v2
        bubble_v2.c
        bubble_v2.h
)