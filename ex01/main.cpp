#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "---- CONSTRUCTORS ----" << std::endl;
	ClapTrap carapuce("Carapuce");
	ScavTrap bulbizar("Bulbizar");
	ScavTrap pikachu;
	ScavTrap bulbiclone = bulbizar;

	std::cout << std::endl << "---- VALID ACTIONS ----" << std::endl;
	carapuce.attack("Bulbizar");
	bulbizar.attack("Carapuce");
	bulbizar.takeDamage(2);
	bulbizar.beRepaired(1);
	bulbizar.guardGate();

	std::cout << std::endl << "---- INVALID ACTIONS ----" << std::endl;
	bulbizar.takeDamage(100);
	bulbizar.attack("Carapuce");
	bulbizar.takeDamage(2);
	bulbizar.beRepaired(2);
	bulbizar.guardGate();

	for (int i = 0; i < 51; i++) {
		bulbiclone.attack("Carapuce");
	}

	std::cout << std::endl << "---- DESTRUCTORS ----" << std::endl;
	return 0;
}