#include <iostream>
#include <string>
#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "HordeZombie";
    
    std::cout << "Creating a horde of " << N << " zombies..." << std::endl;
    Zombie *horde = zombieHorde(N, name);
    
    std::cout << "Announcing all zombies:" << std::endl;
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    
    std::cout << "Deleting the horde..." << std::endl;
    delete [] horde;
    
    return 0;
}
