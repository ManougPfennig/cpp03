#include "FragTrap.hpp"

// CONSTRUCTOR

FragTrap::FragTrap( void ){

	std::cout << "Default FragTrap constructed" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( std::string name ){

	std::cout << "Named FragTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( const FragTrap & copy ){

	std::cout << "Copy FragTrap constructed from: (" << copy._name << ")" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

// DESTRUCTOR


FragTrap::~FragTrap( void ){

	if (this->_name.length())
		std::cout << "FragTrap destroyed: " << this->_name << std::endl;
	else
		std::cout << "FragTrap destroyed: (Default)" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void){

	if (this->_name.length())
		std::cout << this->_name;
	else
		std::cout << "(Default)";
	if (this->_hitPoints <= 0)
		std::cout << ": No hitPoints left to high five" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << ": No energyPoints left to high five" << std::endl;
	else
		std::cout << ": HIGH FIVES GUYS !!!" << std::endl;
	return ;
}
