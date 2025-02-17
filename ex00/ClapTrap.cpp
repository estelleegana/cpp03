#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << BOLD GREEN << "Constructeur : " << RESET <<_name << " is born" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << BOLD RED << "Destructeur : " << RESET << _name << " seize to exist" << std::endl;
}

std::string ClapTrap::getName()
{
    return _name;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks ";
    std::cout << target << ", causing ";
    std::cout << _ad << " points of damage ! " << std::endl;
}