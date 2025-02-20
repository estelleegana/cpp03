#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>//std::cout, cin..
# include <iomanip>//std::setw
# include "ClapTrap.hpp"

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class FlagTrap : public ClapTrap
{
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;

    public:
        FlagTrap();//constructeur derive par defaut
        FlagTrap(std::string name);//constructeur derive ac para
        FlagTrap( const FlagTrap &autre );//constructeur derive de recopie
        FlagTrap &operator=( const FlagTrap &autre );//surcharge de l'operateur d'affectation
        ~FlagTrap();//destructeur derive

        void highFivesGuys(void);
};

#endif