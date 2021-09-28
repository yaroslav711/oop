#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <assert.h>

class Ingredient {
public:
    
    //Создаем сеттеры и геттеры
    
    std::string getName() const;
    std::string getUnit() const;
    int getCount() const;
    
    void setName(std::string newName);
    void setUnit(std::string newUnit);
    void setCount(int newCount);
    
    Ingredient();  //конструктор по умолчанию
    
    Ingredient(std::string name, std::string unit, int count);  //конструктор инициализации
    
    Ingredient(const Ingredient& other);  //конструктор копирования
    
    ~Ingredient();
    
private:
    std::string name; // название ингридиента
    std::string unit; // единица измерения
    int count; // количество
};

#endif
