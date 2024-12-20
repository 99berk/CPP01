#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    this->_name = "NameLess";
    std::cout << "Default Zombie Constructor Called" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << name << " Zombie Constructor Called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Zombie Destructor Called" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}