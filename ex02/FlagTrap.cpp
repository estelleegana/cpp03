#include "FlagTrap.hpp"

// Constructeur par defaut
FlagTrap::FlagTrap() : _hp(100), _ep(100), _ad(30)
{
    std::cout << BOLD GREEN << "Constructeur par defaut (FlagTrap): " << RESET <<_name << " is born" << std::endl;
}

//Constructeur ac nom
FlagTrap::FlagTrap(std::string name) : _name(name), _hp(100), _ep(100), _ad(30)
{
    std::cout << BOLD GREEN << "Constructeur (FlagTrap): " << RESET <<_name << " is born" << std::endl;
}

//Constructeur de recopie
FlagTrap::FlagTrap(const FlagTrap &autre) : ClapTrap(autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (FlagTrap): " << RESET << autre._name << " copy is born" << std::endl;
}

//Surcharge de l'operateur d'affectation
FlagTrap &FlagTrap::operator=(const FlagTrap &autre)
{
    _name = autre._name;
    _hp = autre._hp;
    _ep = autre._ep;
    _ad = autre._ad;
    return (*this);
}

//Destructeur
FlagTrap::~FlagTrap()
{
    std::cout << BOLD RED << "Destructeur (FlagTrap): " << RESET << _name << " seize to exist" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "High Five Guys" << std::endl;
}