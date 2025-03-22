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
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap( const ScavTrap &autre );
        ScavTrap &operator=( const ScavTrap &autre );
        ~ScavTrap();

        void guardGate();
        void attack(const std::string &target);
};

#endif