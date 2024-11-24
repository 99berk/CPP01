#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie *zombieArmy;

    zombieArmy = zombieHorde(7, "SoldieR");

    std::cout << std::endl;
    zombieArmy[3].announce();
    std::cout << std::endl;

    int i = -1;
    while (++i < 7)
    {
        std::cout << i + 1 << ".zombie-> ";
        zombieArmy[i].announce();
    }
    std::cout << std::endl;

    delete[] zombieArmy;

    std::cout << std::endl;
    Zombie zombie;
    zombie.announce();
}
