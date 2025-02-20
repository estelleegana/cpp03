#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>//std::cout, cin..
# include <iomanip>//std::setw

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
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
        ClapTrap(std::string name, int hp, int ep, int ad);
        ClapTrap( const ClapTrap &autre );//constructeur de recopie
        ClapTrap &operator=( const ClapTrap &autre );//surcharge de l'operateur d'affectation
        ~ClapTrap();//destructeur

        // std::string getName();
        // int getH();
        // int getE();
        // int getA();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void displayInfos();
};

#endif