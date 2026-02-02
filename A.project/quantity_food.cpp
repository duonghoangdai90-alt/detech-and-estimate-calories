#include<iostream>
#include"quantity_food.h"

quantity_food::quantity_food(const int initiaint):quantity_sl(initiaint){}

void quantity_food::quantity(int newquan){
    this->quantity_sl = newquan;
}   
const int quantity_food::getquantity() const{
    return quantity_sl;
}

int quantity_food::display() const{
    return quantity_sl;
}
