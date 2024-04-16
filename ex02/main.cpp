#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	wolf("Wolfgang");
	FragTrap	amad("Amadeus");
	FragTrap	moza("Mozart");
	FragTrap	copy(moza);
	FragTrap	noName;

	std::cout << "\n\n\n     Testing attack function:\n" << std::endl;
	wolf.attack("The President");
	amad.attack("The President");
	moza.attack("The President");
	copy.attack("The President");
	noName.attack("The President");

	std::cout << "\n\n\n     Testing takeDamage function:\n" << std::endl;
	wolf.takeDamage(5);
	amad.takeDamage(5);
	moza.takeDamage(5);
	copy.takeDamage(5);
	noName.takeDamage(5);

	std::cout << "\n\n\n     Testing takeDamage function (2):\n" << std::endl;
	wolf.takeDamage(4);
	amad.takeDamage(5);
	moza.takeDamage(6);
	copy.takeDamage(7);
	noName.takeDamage(8);

	std::cout << "\n\n\n     Testing attack function (2):\n" << std::endl;
	wolf.attack("a blind child");
	amad.attack("a blind child");
	moza.attack("a blind child");
	copy.attack("a blind child");
	noName.attack("a blind child");

	std::cout << "\n\n\n     Testing beRepaired function :\n" << std::endl;
	wolf.beRepaired(4);
	amad.beRepaired(5);
	moza.beRepaired(6);
	copy.beRepaired(7);
	noName.beRepaired(8);

	std::cout << "\n\n\n     Testing highFivesGuys function :\n" << std::endl;
	wolf.highFivesGuys();
	amad.highFivesGuys();
	moza.highFivesGuys();
	copy.highFivesGuys();
	noName.highFivesGuys();

	std::cout << "\n\n\n     Emptying energyPoints from Wolfgang, Amadeus and Mozart...\n" << std::endl;
	wolf.removeEnergy();
	amad.removeEnergy();
	moza.removeEnergy();

	std::cout << "     Testing attack function (no energy) :\n" << std::endl;
	wolf.attack("a fish");
	amad.attack("a fish");
	moza.attack("a fish");
	copy.attack("a fish");
	noName.attack("a fish");

	std::cout << "\n\n\n     Testing beRepaired function (no energy) :\n" << std::endl;
	wolf.beRepaired(4);
	amad.beRepaired(5);
	moza.beRepaired(6);
	copy.beRepaired(7);
	noName.beRepaired(8);

	std::cout << "\n\n\n     Testing highFivesGuys function (no energy) :\n" << std::endl;
	wolf.highFivesGuys();
	amad.highFivesGuys();
	moza.highFivesGuys();
	copy.highFivesGuys();
	noName.highFivesGuys();
	std::cout << "\n\n" << std::endl;

	return (0);
}