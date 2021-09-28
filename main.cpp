#include "Header.h"

Ingredient::Ingredient(std::string name, std::string unit, int count):
    name(name), unit(unit), count(count){}

int main() {
    testConstructors();
    testGetAndSet();
    return 0;
}
