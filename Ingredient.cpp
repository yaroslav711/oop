#include "Header.h"

//конструктор по умолчанию
Ingredient::Ingredient() {
    name = "";
    unit = "";
    count = 0;
}

// конструктор инициализации
Ingredient::Ingredient(std::string newName, std::string newUnit, int newCount) {
    name = newName;
    unit = newUnit;
    count = newCount;
}


// контруктор копирования
Ingredient::Ingredient(const Ingredient& ingredient) {
    name = ingredient.name;
    unit = ingredient.unit;
    count = ingredient.count;
}

//деструктор
Ingredient::~Ingredient() {
    
}

//Геттеры
std::string Ingredient::getName() const {
    return name;
}

std::string Ingredient::getUnit() const {
    return unit;
}

int Ingredient::getCount() const {
    return count;
}

// сеттеры
void Ingredient::setName(std::string setName){
    name = setName;
}

void Ingredient::setUnit(std::string setUnit){
    unit = setUnit;
}

void Ingredient::setCount(int setCount){
    count = setCount;
}

