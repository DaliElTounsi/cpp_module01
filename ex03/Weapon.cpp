#include <string>
#include "Weapon.hpp"
#include <iostream>





 Weapon::Weapon(std::string typeArme)
  : m_typeArme(typeArme)
{

}

void    Weapon::setType(std::string const &typeArme)
{
    m_typeArme = typeArme;
}

const std::string&	Weapon::getType() const
{
    return m_typeArme;
}
