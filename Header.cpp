#include "Header.h"
Ingredient::Ingredient() {
    name = "";
    unit = "";
    count = 0;
}

Ingredient::Ingredient(const Ingredient& ingredient) {
    name = ingredient.name;
    unit = ingredient.unit;
    count = ingredient.count;
}

