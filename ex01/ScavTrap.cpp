#include "ScavTrap.hpp"

// Constructeur par defaut
ScavTrap::ScavTrap() : _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur derive par defaut: " << RESET <<_name << " is born" << std::endl;
}

//Constructeur ac nom
ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur derive: " << RESET <<_name << " is born" << std::endl;
}

//Constructeur de recopie
ScavTrap::ScavTrap(const ScavTrap &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur derive de recopie: " << RESET << autre._name << " copy is born" << std::endl;
}

//Surcharge de l'operateur d'affectation
ScavTrap &ScavTrap::operator=(const ScavTrap &autre)
{
    return (*this);
}

//Destructeur
ScavTrap::~ScavTrap()
{
    std::cout << BOLD RED << "Destructeur derive: " << RESET << _name << " seize to exist" << std::endl;
}

//coute 1 energy poiny (ep)
void ScavTrap::attack(const std::string &target)
{
    if (_ep > 0 && _hp > 0)
    {
        _ep = _ep - 1;
        std::cout << _name << " (D) attacks ";
        std::cout << target << ", causing ";
        std::cout << _hp << " points of damage ! " << std::endl;
    }
    else if (_ep < 1)
        std::cout << _name << " cant attack cause (s)he has no Energy points." << std::endl;
    else if (_hp < 1)
        std::cout << _name << " cant attack cause (s)he has no Hit points." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << _name << " is now in Gate keeper mode." << std::endl;
}