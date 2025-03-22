#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("polo");

	std::cout << "---- CONSTRUCTORS ----" << std::endl;
	ClapTrap carapuce("Carapuce");
	FragTrap bulbizar("Bulbizar");
	FragTrap pikachu;
	FragTrap bulbiclone(bulbizar);

	std::cout << std::endl << "---- VALID ACTIONS ----" << std::endl;
	carapuce.attack("Bulbizar");
	bulbizar.attack("Carapuce");
	bulbizar.takeDamage(2);
	bulbizar.beRepaired(1);
	bulbizar.highFivesGuys();

	std::cout << std::endl << "---- INVALID ACTIONS ----" << std::endl;
	bulbizar.takeDamage(100);
	bulbizar.attack("Carapuce");
	bulbizar.takeDamage(2);
	bulbizar.beRepaired(2);
	bulbizar.highFivesGuys();

	for (int i = 0; i < 101; i++) {
		bulbiclone.attack("Carapuce");
	}

	std::cout << std::endl << "---- DESTRUCTORS ----" << std::endl;
}