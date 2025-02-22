#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Paul");
    ClapTrap copy(clap);
    ClapTrap neww = ClapTrap();

    neww = clap;

    std::cout << std::endl << "--- copy and new ---" << std::endl;
    copy.attack("Pierre");
    copy.attack("Pierre");
    copy.displayInfos();
    neww.attack("Pierre");
    neww.displayInfos();

    std::cout << std::endl << "--- clap ---" << std::endl;
    clap.displayInfos();
    std::cout << std::endl;
    clap.beRepaired(5);
    clap.displayInfos();
    clap.attack("Pierre");
    clap.displayInfos();

    clap.takeDamage(50);
    clap.displayInfos();
    for (int i = 0; i < 8 ; i++) {
        clap.beRepaired(10);
        // clap.displayInfos();
    }
    clap.displayInfos();
    clap.attack("Pierre");
    clap.takeDamage(50);
    clap.displayInfos();
    std::cout << std::endl;
}