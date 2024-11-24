#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
    std::cout << this->name << " Contructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " Destructor Called" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
