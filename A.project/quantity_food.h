#ifndef QUANTITY_FOOD_H
#define QUANTITY_FOOD_H

class quantity_food{
private:
    int quantity_sl;
public:
    
    explicit quantity_food(const int initiaint = 0);
    
    void quantity(int newquantity);

    const int getquantity() const;

    int display() const;
};
#endif
