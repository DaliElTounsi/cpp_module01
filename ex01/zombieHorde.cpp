#include <iostream>
#include <string>
#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{

    Zombie *ZombieHorde;
    int			index(0);
    
    if (N <= 0)
        return NULL;

    ZombieHorde = new Zombie[N];
	while (index < N)
	{
        ZombieHorde[index].setName(name);
        index++;
    }
    return ZombieHorde;
}