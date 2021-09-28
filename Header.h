#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <assert.h>

class Ingredient {
public:
    
    //Создаем сеттеры и геттеры
    
    void setName(std::string value_name) {
        name = value_name;
    }
    
    std::string getName() { return (name); }
    
    void setUnit(std::string value_unit) {
        unit = value_unit;
    }
    
    std::string getUnit() { return (unit); }
    
    void setCount(int value_count) {  // проверка на то, что кол-во больше 0
        if (value_count > 0)
            count = value_count;
        else
            std::cout <<"Incorrect count"<< std::endl;
            
    }
    
    int getCount() const { return (count); }
    
    Ingredient();  //конструктор по умолчанию
    
    Ingredient(std::string name, std::string unit, int count);  //конструктор инициализации ТУТ ССЫЛКИ
    
    Ingredient(const Ingredient& other);  //конструктор копирования
    
    ~Ingredient();
    
private:
    std::string name; // название ингридиента
    std::string unit; // единица измерения
    int count; // количество
};

#endif
