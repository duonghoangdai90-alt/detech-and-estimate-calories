#include <iostream>
#include "name_food.h"
#include "quantity_food.h"

int main(){
    name_food nf;
    quantity_food qf(0);
    std::vector<std::string> v(3);
    
    qf.input();
    std::cout<<"so mon co trong anh la : "<<qf.display();
    qf.display();

    nf.input_nf(qf, v);
    nf.display();

    return 0;
}