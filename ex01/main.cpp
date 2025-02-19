#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap h("Derive");
    
    h.displayInfos();
    h.beRepaired(100);
    h.attack("a sheep");
    h.takeDamage(100);
    h.guardGate();
    h.displayInfos();
}