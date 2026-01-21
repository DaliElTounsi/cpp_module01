#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#include <string>

class Zombie
{

public :

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void    announce(void);

private :
	
   std::string  m_name;

};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );


#endif