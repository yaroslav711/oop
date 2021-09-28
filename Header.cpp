#include "Header.h"

//конструктор по умолчанию
Ingredient::Ingredient() {
    name = "";
    unit = "";
    count = 0;
}

// контруктор копирования
Ingredient::Ingredient(const Ingredient& ingredient) {
    name = ingredient.name;
    unit = ingredient.unit;
    count = ingredient.count;
}

//деструктор
Ingredient::~Ingredient(){
}
