#include "ClapTrap.hpp"

int main()
{
    ClapTrap h("Hero");
    ClapTrap copy(h);
    ClapTrap e;
    ClapTrap &target = e;
    
    h.beRepaired(100);
    h.attack(target.getName());
    h.attack(target.getName());
    h.displayInfos();
    h.attack(target.getName());
    h.attack(target.getName());
    h.takeDamage(50);
    h.displayInfos();
    h.attack(target.getName());
    h.attack(target.getName());
    h.displayInfos();
    h.attack(target.getName());
    h.attack(target.getName());
    h.attack(target.getName());
    h.attack(target.getName());
    h.beRepaired(100);
    h.displayInfos();
    e.displayInfos();
    target.displayInfos();
    target.displayInfos();
}