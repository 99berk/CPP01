#include "Zombie.hpp"
#include <iostream>

void randomChump(std::string name)
{
    Zombie *zombie;
    zombie = new Zombie(name);
    zombie->announce();
    delete zombie;
}