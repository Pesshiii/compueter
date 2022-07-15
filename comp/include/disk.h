#pragma once
#include "ram.h"
#include <fstream>
#include <iostream>

void save(int nums[]){
    std::ofstream save("data.txt");
    if(!save.is_open()){
        std::cout << "wrong output";
    } 
    else{
        for(int i = 0; i < sizeof(nums); ++ i){
            save << *ram(nums, i) << ' ';
        }
        std::cout << "File saved" << std::endl;
    }
}

void load(int nums[]){
    std::ifstream load("data.txt");
    if(!load.is_open()){
        std::cout << "wrong input";
    } 
    else{
        for(int i = 0; i < sizeof(nums); ++ i){
            load >> *ram(nums, i);
        }
        std::cout << "File loaded" << std::endl;
    }
}