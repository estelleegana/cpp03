#include "ScavTrap.hpp"

// Constructeur par defaut
ScavTrap::ScavTrap() : _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur par defaut (ScavTrap): " << RESET <<_name << " is born" << std::endl;
}

//Constructeur ac nom
ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur (ScavTrap): " << RESET <<_name << " is born" << std::endl;
}

//Constructeur de recopie
ScavTrap::ScavTrap(const ScavTrap &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (ScavTrap): " << RESET << autre._name << " copy is born" << std::endl;
}

//Surcharge de l'operateur d'affectation
ScavTrap &ScavTrap::operator=(const ScavTrap &autre)
{
    _name = autre._name;
    _hp = autre._hp;
    _ep = autre._ep;
    _ad = autre._ad;
    return (*this);
}

//Destructeur
ScavTrap::~ScavTrap()
{
    std::cout << BOLD RED << "Destructeur (ScavTrap): " << RESET << _name << " seize to exist" << std::endl;
}

//coute 1 energy poiny (ep)
void ScavTrap::attack(const std::string &target)
{
    if (_ep > 0 && _hp > 0)
    {
        _ep = _ep - 1;
        std::cout << "ScavTrap" << _name << " attacks ";
        std::cout << target << ", causing ";
        std::cout << _hp << " points of damage ! " << std::endl;
    }
    else if (_ep < 1)
        std::cout << "ScavTrap" << _name << " cant attack cause (s)he has no Energy points." << std::endl;
    else if (_hp < 1)
        std::cout << "ScavTrap" << _name << " cant attack cause (s)he has no Hit points." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << _name << " is now in Gate keeper mode." << std::endl;
}