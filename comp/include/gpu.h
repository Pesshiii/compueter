#pragma once
#include <iostream>
#include "ram.h"

void display(int nums[]){
    for (int i = 0; i < sizeof(nums); ++i){
        std::cout << *read(nums, i) << "  ";
    }
    std::cout << std::endl;
}