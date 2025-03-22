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
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap( const FragTrap &autre );
        FragTrap &operator=( const FragTrap &autre );
        ~FragTrap();

        void highFivesGuys(void);
};

#endif