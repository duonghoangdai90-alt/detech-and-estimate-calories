#ifndef NAME_FOOD_H
#define NAME_FOOD_H

#include<string>
#include<vector>

class Name_food{
private:
    std::vector<std::string> foodList;
    bool isValidFoodName(const std::string& name) const;
public:
    explicit Name_food(const::std::vector<std::string> &initialist={});

    void setFood(std::vector<std::string> &newlist);

    bool updateFoodByIndex(size_t index, const std::string& newName);

    // Sửa theo tên cũ (business logic thường dùng)
    bool updateFoodByName(const std::string& oldName,
                          const std::string& newName);

    // Thêm / xoá (rất hay cần sau này)
    void addFood(const std::string& name);
    bool removeFood(const std::string& name);

    // Debug / log
    void display() const;

};

#endif
