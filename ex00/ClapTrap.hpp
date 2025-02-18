#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
# include <iomanip>//std::setw

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define BLUE "\033[38;2;0;0;255m"
#define YELLOW "\033[38;2;255;255;0m"
#define CYAN "\033[38;2;0;255;255m"
#define MAGENTA "\033[38;2;255;0;255m"
#define ORANGE "\033[38;2;255;165;0m"
#define PINK "\033[38;2;255;105;180m"
#define LIME "\033[38;2;191;255;50m"
#define PURPLE "\033[38;2;138;43;226m"
#define RESET "\033[0m"

class ClapTrap {
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;

    public:
        ClapTrap();//constructeur par defaut
        ClapTrap(std::string name);//constructeur ac name en parametre
        ClapTrap( const ClapTrap &autre );//constructeur de recopie
        ClapTrap &operator=( const ClapTrap &autre );//surcharge de l'operateur d'affectation
        ~ClapTrap();//destructeur

        std::string getName();
        int getH();
        int getE();
        int getA();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void displayInfos();
};

#endif