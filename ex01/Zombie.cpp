#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "Zombie Constructor Called" << std::endl;
    this->_name = "NameLess";
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Zombie Destructor Called" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string name)
{
    this->_name = name;
}