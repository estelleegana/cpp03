#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>//std::cout, cin..
# include <iomanip>//std::setw
# include "ClapTrap.hpp"

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class ScavTrap : public ClapTrap
{
    // private:
    //     std::string _name;
    //     int _hp;
    //     int _ep;
    //     int _ad;

    public:
        ScavTrap();//constructeur derive par defaut
        ScavTrap(std::string name);//constructeur derive ac para
        ScavTrap( const ScavTrap &autre );//constructeur derive de recopie
        ScavTrap &operator=( const ScavTrap &autre );//surcharge de l'operateur d'affectation
        ~ScavTrap();//destructeur derive

        void guardGate();
        void attack(const std::string &target);
};

#endif