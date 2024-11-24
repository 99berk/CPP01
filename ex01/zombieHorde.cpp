#include "Zombie.hpp"
#include <iostream>

Zombie*    zombieHorde(int N, std::string name)
{
    Zombie *zombie;

    zombie = new Zombie[N];

    int i = -1;
    while(++i < N)
        zombie[i].setName(name);
    
    return zombie;
}