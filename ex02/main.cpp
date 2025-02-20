#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{
    FlagTrap h("Hero");
    
    h.displayInfos();
    h.beRepaired(100);
    h.attack("a sheep");
    h.takeDamage(100);
    h.attack("une chevre");
    h.displayInfos();
    h.highFivesGuys();
}