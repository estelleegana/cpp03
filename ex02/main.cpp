#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("polo");

    frag.displayInfos();
    frag.attack("Josh");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    frag.displayInfos();
}