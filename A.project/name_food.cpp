#include"name_food.h"
#include"quantity_food.h"

#include<iostream>
#include <vector>
#include<string>
#include<limits>

name_food::name_food(std::vector<std::string> v){};

void name_food::input_nf(const quantity_food &a, std::vector<std::string> &v) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < a.display(); i++){
        getline(std::cin,v[i]);
    }
}
void name_food::display() const{
    for (auto it = v.begin(); it != v.end(); it++){
        std::cout<<*it<<std::endl;
    }
}