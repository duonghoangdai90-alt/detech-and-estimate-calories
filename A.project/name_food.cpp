#include "name_food.h"

#include <iostream>
#include <algorithm>

// ================= Constructor =================

Name_food::Name_food(const std::vector<std::string>& initialList)
    : foodList(initialList) {}

// ================= Read-only =================

void Name_food::setFood(std::vector<std::string> &newlist){
    this->foodList = newlist;
}
// ================= Edit APIs =================

bool Name_food::updateFoodByIndex(size_t index, const std::string& newName) {
    if (index >= foodList.size()) {
        return false;
    }

    if (!isValidFoodName(newName)) {
        return false;
    }

    foodList[index] = newName;
    return true;
}

bool Name_food::updateFoodByName(const std::string& oldName,
                                 const std::string& newName) {
    if (!isValidFoodName(newName)) {
        return false;
    }

    auto it = std::find(foodList.begin(), foodList.end(), oldName);
    if (it == foodList.end()) {
        return false;
    }

    *it = newName;
    return true;
}

// ================= Add / Remove =================

void Name_food::addFood(const std::string& name) {
    if (isValidFoodName(name)) {
        foodList.push_back(name);
    }
}

bool Name_food::removeFood(const std::string& name) {
    auto it = std::remove(foodList.begin(), foodList.end(), name);
    if (it == foodList.end()) {
        return false;
    }

    foodList.erase(it, foodList.end());
    return true;
}

// ================= Utility =================

bool Name_food::isValidFoodName(const std::string& name) const {
    return !name.empty();
}

void Name_food::display() const {
    for (const auto& food : foodList) {
        std::cout << food << '\n';
    }
}
