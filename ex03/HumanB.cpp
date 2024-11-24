#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon = 0;
    std::cout << this->name << " Contructor Called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << " Destructor Called" << std::endl;
}

void HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
