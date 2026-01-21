#include <iostream>
#include <string>
#include "Zombie.hpp"



Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
	: m_name(name)
{

}

Zombie::~Zombie()
{
    std::cout << "Destroying zombie : " << m_name << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}


