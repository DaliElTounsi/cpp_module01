#include <iostream>
#include <string>

#include "Zombie.hpp"

int main()
{
    std::string name("charlie");
    Zombie *Zombio;
    Zombio = newZombie(name);
    Zombio->announce();
    delete Zombio;
    randomChump(name);
    return 0;
}