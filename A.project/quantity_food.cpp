#include<iostream>
#include"quantity_food.h"

quantity_food::quantity_food(int quantity):quantity(quantity){};

void quantity_food::input(){
    std::cout<<"nhap so mon: ";
    std::cin>>quantity;
}
int quantity_food::display() const{
    return quantity;
}