#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << BOLD GREEN << "Constructeur par defaut (ClapTrap): " << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << BOLD GREEN << "Constructeur (ClapTrap): " << RESET <<_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name), _hp(hp), _ep(ep), _ad(ad)
{
    std::cout << BOLD GREEN << "Constructeur (ClapTrap): " << RESET <<_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (ClapTrap): " << RESET << autre._name << " copy is born" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &autre)
{
    _name = autre.getName();
    _hp = autre.getH();
    _ep = autre.getE();
    _ad = autre.getA();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << BOLD RED << "Destructeur (ClapTrap): " << RESET << _name << " seize to exist" << std::endl;
}


std::string ClapTrap::getName() const
{
    return _name;
}

int ClapTrap::getH() const
{
    return _hp;
}

int ClapTrap::getE() const
{
    return _ep;
}

int ClapTrap::getA() const
{
    return _ad;
}


//coute 1 energy poiny (ep)
void ClapTrap::attack(const std::string &target)
{
    if (_ep > 0 && _hp > 0)
    {
        _ep = _ep - 1;
        std::cout << "ClapTrap " << _name << " attacks ";
        std::cout << target << ", causing ";
        std::cout << _ad << " points of damage ! " << std::endl;
    }
    else if (_ep < 1)
        std::cout << "ClapTrap " << _name << " cant attack cause (s)he has no Energy points." << std::endl;
    else if (_hp < 1)
        std::cout << "ClapTrap " << _name << " cant attack cause (s)he has no Hit points." << std::endl;
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
        std::cout << "ClapTrap " << _name << " lost " << amount << " hit points." << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " already has 0 hit points." << std::endl;
}

//coute 1 energy point (ep)
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0)
    {
        _hp = _hp + amount;
        _ep = _ep - 1;
        std::cout << "ClapTrap " << _name << " repairs itself and gets ";
        std::cout << amount << " hit points back." << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " cant be repaired cause (s)he has no Energy points." << std::endl;
}

//affiche les pts restants
void ClapTrap::displayInfos()
{
    std::cout << "\t\t" << BOLD << _name << RESET;
    std::cout << " - hit points: " << _hp;
    std::cout << ", energy points: " << _ep;
    std::cout << ", attack damage: " << _ad << std::endl;
}