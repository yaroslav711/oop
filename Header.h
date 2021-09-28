#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <assert.h>

void testConstructors();
void testGetAndSet();

class Ingredient {
public:
    
    //Создаем сеттеры и геттеры
    
    void setName(std::string value_name) {
        name = value_name;
    }
    
    std::string getName() const { return (name); }
    
    void setUnit(std::string value_unit) {
        unit = value_unit;
    }
    
    std::string getUnit() const { return (unit); }
    
    void setCount(int value_count) {  // проверка на то, что кол-во больше 0
        if (value_count > 0)
            count = value_count;
        else
            std::cout <<"Incorrect count"<< std::endl;
            
    }
    
    int getCount() const { return (count); }
    
    Ingredient() = default;  //конструктор по умолчанию
    
    Ingredient(std::string name, std::string unit, int count);  //конструктор инициализации
    
    Ingredient(const Ingredient& other) = default;  //конструктор копирования
    
private:
    std::string name; // название ингридиента
    std::string unit; // единица измерения
    int count; // количество
};

#endif
