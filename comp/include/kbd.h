#pragma once
#include "ram.h"
#include <iostream>

void input(int nums[]){
    for(int i = 0; i < sizeof(nums); ++i){
        std::cout << "Enter the num no_ " << i + 1 << std::endl;
        std::cin >> *write(nums, i);
    }
}