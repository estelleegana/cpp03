#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap    scav("Bot");
    ClapTrap    clap("Mario");
    
    ScavTrap    scav2(scav);
    ClapTrap    clap2(clap);

    std::cout << std::endl;

    scav.attack("Mario");
    clap.takeDamage(20);
    clap.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl << std::endl;

    // test energy points
    clap.displayInfos();

    std::cout << std::endl;

    for (int i = 0; i < 11; i++)
        clap.beRepaired(20);
    clap.displayInfos();

    std::cout << std::endl;

    // test energy points
    scav.displayInfos();
    std::cout << std::endl;
    for (int i = 0; i < 25; i++)
    {
        scav.attack("Mario");
        // messages de scav identique au message de clap
        scav.takeDamage(20); 
        scav.beRepaired(20);
        // scav.displayInfos();
    }
    scav.displayInfos();
    return (0);
}