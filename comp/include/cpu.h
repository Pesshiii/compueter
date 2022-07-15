#pragma once
#include "ram.h"
#include <iostream>

void find_sum(int nums[]){
    int sum = 0;
    for(int i = 0; i < sizeof(nums); ++i){
        sum += *ram(nums, i);
    }
    std::cout << "The sum is: " << sum << std::endl;
}