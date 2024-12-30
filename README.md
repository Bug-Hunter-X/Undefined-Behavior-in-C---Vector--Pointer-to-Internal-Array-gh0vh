# Undefined Behavior in C++ Vector: Pointer to Internal Array

This repository demonstrates a common source of undefined behavior (UB) in C++ when dealing with `std::vector`.  The code creates a pointer to the internal array of a vector and then modifies the vector. This leads to unpredictable behavior, as the vector's internal memory allocation can change during resizing.

## Bug Description
The bug lies in accessing elements of the vector using a raw pointer obtained from `&vec[0]` after the vector is resized using `push_back`.  The `push_back` operation might reallocate the internal array, invalidating the pointer, leading to UB.

## Solution
The solution is to avoid using raw pointers to access vector elements, especially after modifying the vector's size. Instead, iterate through the vector using iterators or indices in a safe manner.