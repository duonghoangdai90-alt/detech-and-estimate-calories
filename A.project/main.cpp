#include <iostream>
#include<limits>
#include "name_food.h"
#include "quantity_food.h"

int main(){
    Name_food nf;
    quantity_food qf;
    int n;
    std::cout<<"nhap so mon = ";
    std::cin>>n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    qf.quantity(n);
    std::cout<<"so mon = "<<qf.display()<<std::endl;

    std::vector<std::string> v;
    v.resize(qf.getquantity());
    for (int i = 0; i < qf.getquantity(); i++){
        getline(std::cin,v[i]);
    }
    nf.setFood(v);

    std::cout<<"ds mon : "<<std::endl;
    nf.display();

    return 0;
}
