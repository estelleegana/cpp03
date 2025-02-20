#include "ClapTrap.hpp"

//Constructeur par defaut
ClapTrap::ClapTrap() : _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur par defaut: " << RESET <<_name << " is born" << std::endl;
}

//Constructeur ac nom
ClapTrap::ClapTrap(std::string name) : _name(name), _hp(100), _ep(50), _ad(20)
{
    std::cout << BOLD GREEN << "Constructeur: " << RESET <<_name << " is born" << std::endl;
}

//Constructeur de recopie
ClapTrap::ClapTrap(const ClapTrap &autre)
{
    _name = autre._name;
    _hp = autre._hp;
    _ep = autre._ep;
    _ad = autre._ad;
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie: " << RESET << autre._name << " copy is born" << std::endl;
}

//Surcharge de l'operateur d'affectation
ClapTrap &ClapTrap::operator=(const ClapTrap &autre)
{
    return (*this);
}

//Destructeur
ClapTrap::~ClapTrap()
{
    std::cout << BOLD RED << "Destructeur: " << RESET << _name << " seize to exist" << std::endl;
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
    if (_ep > 0 && _hp > 0)
    {
        _ep = _ep - 1;
        std::cout << _name << " attacks ";
        std::cout << target << ", causing ";
        std::cout << _hp << " points of damage ! " << std::endl;
    }
    else if (_ep < 1)
        std::cout << _name << " cant attack cause (s)he has no Energy points." << std::endl;
    else if (_hp < 1)
        std::cout << _name << " cant attack cause (s)he has no Hit points." << std::endl;
}

//perd des hit points
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp > 0)
    {
        if (_hp > amount)
            _hp = _hp - amount;
        else
            _hp = 0;
        std::cout << _name << " lost " << amount << " hit points." << std::endl;
    }
    else
        std::cout << _name << " already has 0 hit points." << std::endl;
}

//coute 1 energy point (ep)
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0)
    {
        _hp = _hp + amount;
        _ep = _ep - 1;
        std::cout << _name << " repairs itself and gets ";
        std::cout << amount << " hit points back." << std::endl;
    }
    else
        std::cout << _name << " cant be repaired cause (s)he has no Energy points." << std::endl;
}

//affiche les pts restants
void ClapTrap::displayInfos()
{
    std::cout << "\t\t" << BOLD << _name << RESET;
    std::cout << " - hit points: " << _hp;
    std::cout << ", energy points: " << _ep;
    std::cout << ", attack damage: " << _ad << std::endl;
}