#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
public :
	HumanB(std::string const &nom);

	void	attack() const;
	void	setWeapon(Weapon &weapon);

private :
	std::string		m_nom;
	Weapon			*m_weapon;
};

#endif