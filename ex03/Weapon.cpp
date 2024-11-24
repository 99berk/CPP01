#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "Weapon Contructor Called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor Called" << std::endl;
}

const std::string& Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
