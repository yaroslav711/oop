#include "Header.h"
#include <assert.h>

Ingredient::Ingredient(std::string name, std::string unit, int count): 
    name(name), unit(unit), count(count){}

int main() {
    Ingredient ingredientTest0;
    Ingredient ingredientTest1("Молоко", "милилитр", 200);
    Ingredient ingredientTest2(ingredientTest1);
    
    // проверка конструктора по умолчанию
    assert(ingredientTest0.getName() ==  "");
    assert(ingredientTest0.getUnit() ==  "");
    assert(ingredientTest0.getCount() ==  0);
    
    // проверка конструктора инизиализации
    assert(ingredientTest1.getName() == "Молоко");
    assert(ingredientTest1.getUnit() == "милилитр");
    assert(ingredientTest1.getCount() == 200);

    // проверка конструктора копирования
    assert(ingredientTest2.getName() == ingredientTest1.getName());
    assert(ingredientTest2.getUnit() == ingredientTest1.getUnit());
    assert(ingredientTest2.getCount() == ingredientTest1.getCount());

    std::cerr <<"Constructor is working"<< std::endl;
    
    Ingredient ingredientTest3;
    ingredientTest3.setName("Milk");
    assert(ingredientTest3.getName() == "Milk");
    ingredientTest3.setUnit("milliliter");
    assert(ingredientTest3.getUnit() == "milliliter");
    ingredientTest3.setCount(500);
    assert(ingredientTest3.getCount() == 500);

    std::cerr <<"Getters and setters are working"<< std::endl;
    return 0;
}
