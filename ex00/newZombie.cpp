#include <iostream>
#include <string>
#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
	Zombie *Zombinou;

    Zombinou = new Zombie(name);
	
    return Zombinou;
}