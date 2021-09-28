//#include <assert.h>
//#include "Header.h"
//
//// функция проверки конструкторов
//
//void testConstructors() {
//    Ingredient ingredient_test_0;
//    Ingredient ingredient_test_1("Молоко", "милилитр", 200);
//    Ingredient ingredient_test_2(ingredient_test_1);
//
//    // проверка конструктора по умолчанию
//    assert(ingredient_test_0.getName() ==  "");
//    assert(ingredient_test_0.getUnit() ==  "");
//    assert(ingredient_test_0.getCount() ==  0);
//
//    //проверка конструктора инизиализации
//    assert(ingredient_test_1.getName() == "Молоко");
//    assert(ingredient_test_1.getUnit() == "милилитр");
//    assert(ingredient_test_1.getCount() == 200);
//
//    //проверка конструктора копирования
//    assert(ingredient_test_2.getName() == ingredient_test_1.getName());
//    assert(ingredient_test_2.getUnit() == ingredient_test_1.getUnit());
//    assert(ingredient_test_2.getCount() == ingredient_test_1.getCount());
//
//    std::cerr <<"Constructor is working"<< std::endl;
//}
//
////Функция проверки геттеров и сеттеров
//void testGetAndSet() {
//    Ingredient ingredient_test_0;
//    ingredient_test_0.setName("Milk");
//    assert(ingredient_test_0.getName() == "Milk");
//    ingredient_test_0.setUnit("milliliter");
//    assert(ingredient_test_0.getUnit() == "milliliter");
//    ingredient_test_0.setCount(500);
//    assert(ingredient_test_0.getCount() == 500);
//
//    std::cerr <<"Getters and setters are working"<< std::endl;
//}
