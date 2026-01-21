#include <iostream>
#include <string>

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string const &nom)
    : m_nom(nom), m_weapon(NULL)
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}

void	HumanB::attack() const
{
    if (!m_weapon)
    {
        std::cout 
            << m_nom 
            << " has no weapon" 
            << std::endl;
    }
    else
        std::cout 
            << m_nom 
            << " attacks with their " 
            << m_weapon->getType() 
            << std::endl;
}