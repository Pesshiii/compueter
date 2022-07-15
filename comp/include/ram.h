#pragma once
#include <iostream>

int* write(int nums[], int cords){
    return &nums[cords];
}

int* read(int nums[], int cords){
    return &nums[cords];
}