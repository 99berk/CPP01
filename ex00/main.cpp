#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1;
    zombie1 = newZombie("Rick");

    Zombie *zombie2;
    zombie2 = newZombie("Negan");
    
    zombie1->announce();
    zombie2->announce();
    
    randomChump("Daryl");
    randomChump("Carl");
    
    Zombie zombie3;
    zombie3.announce();
    
    delete zombie1;
    delete zombie2;
}
