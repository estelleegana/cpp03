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

int ClapTrap::getH()
{
    return _hp;
}

int ClapTrap::getE()
{
    return _ep;
}

int ClapTrap::getA()
{
    return _ad;
}

//coute 1 energy poiny (ep)
void ClapTrap::attack(const std::string &target)
{
    _ep = _ep - 1;
    std::cout << _name << " attacks ";
    std::cout << target << ", causing ";
    std::cout << _hp << " points of damage ! " << std::endl;
}

//coute 1 energy point (ep)
void ClapTrap::beRepaired(unsigned int amount)
{
    _hp = _hp + amount;
    _ep = _ep - 1;
    std::cout << _name << " repairs itself and gets ";
    std::cout << amount << " hit points back. (S)He has now a new total of ";
    std::cout << _hp << " hit points ! " << std::endl;
}