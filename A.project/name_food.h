#ifndef NAME_FOOD_H
#define NAME_FOOD_H

#include<string>
#include<vector>

class quantity_food;

class Name_food{
private:
    std::vector<std::string> foodlist;
public:
    explicit Name_food(const::std::vector<std::string> &initialist={});

    void setFood(std::vector<std::string> &newlist);
    
    const std::vector<std::string> &getFood() const;

    void display() const;
};

#endif
