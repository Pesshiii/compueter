#include <iostream>
#include "kbd.h"
#include "cpu.h"
#include "disk.h"
#include "gpu.h"

int main(){
    std::string comand;
    int nums[8];
    for(;;){
        std::cout << "enter comand:" << std::endl;
        std::cin >> comand;


        if(comand == "sum"){
            find_sum(nums);
        }
        else if(comand == "save"){
            save(nums);
        }
        else if(comand == "load"){
            load(nums);
        }
        else if(comand == "input"){
            write(nums);
        }
        else if(comand == "display"){
            display(nums);
        }
        else if(comand == "exit"){
            std::cout << "exiting the program";
            return 0;
        }
        else{
            std::cout << "Wrong input" << std::endl;
        }
    }
}