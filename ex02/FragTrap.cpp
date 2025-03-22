#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << BOLD GREEN << "Constructeur par defaut (FragTrap): " << RESET <<_name << " is born" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << BOLD GREEN << "Constructeur (FragTrap): " << RESET <<_name << " is born" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie (FragTrap): " << RESET << copy._name << " copy is born" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &autre)
{
    _name = autre._name;
    _hp = autre._hp;
    _ep = autre._ep;
    _ad = autre._ad;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << BOLD RED << "Destructeur (FragTrap): " << RESET << _name << " seize to exist" << std::endl;
}









void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five Guys" << std::endl;
}