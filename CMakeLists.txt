cmake_minimum_required(VERSION 3.9)
project(__Algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(__Algorithms main.c FundamentalMath/IntegerDivision/floating_point_digits.c FundamentalMath/IntegerDivision/floating_point_digits.h FundamentalMath/Matrixes/diagonal_matrix.c FundamentalMath/Matrixes/diagonal_matrix.h FundamentalMath/Matrixes/spiral_matrix.c FundamentalMath/Matrixes/spiral_matrix.h)