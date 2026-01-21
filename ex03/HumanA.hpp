#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
public :
	HumanA(std::string const &nomHumanA, Weapon &typeArme);
	void	attack() const;

private :
	std::string	m_nom;
	Weapon& m_weapon;
};

#endif