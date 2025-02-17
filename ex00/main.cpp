#include "ClapTrap.hpp"

int main()
{
    ClapTrap Hero = ClapTrap("Hero");
    ClapTrap("Enemy");

    Hero.attack("Enemy");
}