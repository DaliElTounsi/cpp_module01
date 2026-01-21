#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
public : 
    Weapon(std::string typeArme);

    void    setType(std::string const &typeArme);
	const std::string&	getType() const; 

private :
    std::string m_typeArme;

};

#endif