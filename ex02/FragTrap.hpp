#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>//std::cout, cin..
# include <iomanip>//std::setw
# include "ClapTrap.hpp"

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class FragTrap : public ClapTrap
{
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;

    public:
        FragTrap();//constructeur derive par defaut
        FragTrap(std::string name);//constructeur derive ac para
        FragTrap( const FragTrap &autre );//constructeur derive de recopie
        FragTrap &operator=( const FragTrap &autre );//surcharge de l'operateur d'affectation
        ~FragTrap();//destructeur derive

        void highFivesGuys(void);
};

#endif