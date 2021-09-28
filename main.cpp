#include "Header.h"
#include <assert.h>

Ingredient::Ingredient(std::string name, std::string unit, int count): 
    name(name), unit(unit), count(count){}

int main() {
    Ingredient ingredient_test_0;
    Ingredient ingredient_test_1("Молоко", "милилитр", 200);
    Ingredient ingredient_test_2(ingredient_test_1);
    
    // проверка конструктора по умолчанию
    assert(ingredient_test_0.getName() ==  "");
    assert(ingredient_test_0.getUnit() ==  "");
    assert(ingredient_test_0.getCount() ==  0);
    
    //проверка конструктора инизиализации
    assert(ingredient_test_1.getName() == "Молоко");
    assert(ingredient_test_1.getUnit() == "милилитр");
    assert(ingredient_test_1.getCount() == 200);

    //проверка конструктора копирования
    assert(ingredient_test_2.getName() == ingredient_test_1.getName());
    assert(ingredient_test_2.getUnit() == ingredient_test_1.getUnit());
    assert(ingredient_test_2.getCount() == ingredient_test_1.getCount());

    std::cerr <<"Constructor is working"<< std::endl;
    
    Ingredient ingredient_test_3;
    ingredient_test_3.setName("Milk");
    assert(ingredient_test_3.getName() == "Milk");
    ingredient_test_3.setUnit("milliliter");
    assert(ingredient_test_3.getUnit() == "milliliter");
    ingredient_test_3.setCount(500);
    assert(ingredient_test_3.getCount() == 500);

    std::cerr <<"Getters and setters are working"<< std::endl;
    return 0;
}
