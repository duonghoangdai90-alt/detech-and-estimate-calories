#include"name_food.h"
#include"quantity_food.h"

#include<iostream>
#include <vector>
#include<string>
#include<limits>

Name_food::Name_food(const std::vector<std::string> &initialist):foodlist(initialist){}

void Name_food::setFood(std::vector<std::string> &newlist){
    this->foodlist = newlist;
}
const std::vector<std::string> &Name_food::getFood() const{
    return foodlist;
}

void Name_food::display()const{
    for (auto foodlist : foodlist){
        std::cout<<"-"<<foodlist<<std::endl;
    }
}
