#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap h("Derive");
    ClapTrap h2("Hero principal");
    ClapTrap h3(h2);
    
    h2.displayInfos();
    h3.displayInfos();
    h2.beRepaired(100);
    h2.attack("a sheep");
    h2.takeDamage(100);
    h.guardGate();
    h2.displayInfos();
    h3.displayInfos();
}