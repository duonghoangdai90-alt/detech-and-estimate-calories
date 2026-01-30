#ifndef NAME_FOOD
#define NAME_FOOD

#include<string>
#include<vector>

class quantity_food;
class name_food{
private:
    std::vector<std::string> v;
public:
    name_food(std::vector<std::string> v);
    name_food();
    void input_nf(const quantity_food&a, std::vector<std::string> &v);
    void display() const;
};

#endif