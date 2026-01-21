#include <iostream>
#include <string>

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string const &nomHumanA, Weapon &typeArme)
    : m_nom(nomHumanA), m_weapon(typeArme)
{

}

void	HumanA::attack() const
{
    std::cout 
    << m_nom 
    << " attacks with their " 
    << m_weapon.getType()
    << std::endl;
} 