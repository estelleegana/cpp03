#include "ClapTrap.hpp"

int main()
{
    ClapTrap Hero = ClapTrap("Hero");
    ClapTrap("Enemy");

    Hero.beRepaired(100);
    Hero.beRepaired(50);
    Hero.beRepaired(25);
    Hero.beRepaired(12);
    Hero.attack("Enemy");
    std::cout << "energy point left : " << Hero.getE() << std::endl;
    Hero.attack("Enemy");
    std::cout << "energy point left : " << Hero.getE() << std::endl;
    Hero.attack("Enemy");
    std::cout << "energy point left : " << Hero.getE() << std::endl;
    Hero.attack("Enemy");
    std::cout << "energy point left : " << Hero.getE() << std::endl;
   
}