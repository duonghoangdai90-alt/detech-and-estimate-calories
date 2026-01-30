#ifndef QUANTITY_FOOD
#define QUANTITY_FOOD

class quantity_food{
private:
    int quantity;
public:
    quantity_food(int quantity);
    void input();
    int display() const;
};
#endif