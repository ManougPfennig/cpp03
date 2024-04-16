#include "ScavTrap.hpp"

// CONSTRUCTOR

ScavTrap::ScavTrap( void ){

	std::cout << "Default ScavTrap constructed" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ){

	std::cout << "Named ScavTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & copy ){

	std::cout << "Copy ScavTrap constructed from: (" << copy._name << ")" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

// DESTRUCTOR


ScavTrap::~ScavTrap( void ){

	if (this->_name.length())
		std::cout << "ScavTrap destroyed: " << this->_name << std::endl;
	else
		std::cout << "ScavTrap destroyed: (Default)" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void){

	if (this->_name.length())
		std::cout << this->_name;
	else
		std::cout << "(Default)";
	if (this->_hitPoints <= 0)
		std::cout << ": No hitPoints left to guard" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << ": No energyPoints left to guard" << std::endl;
	else
		std::cout << ": is now in Gate keeper mode" << std::endl;
	return ;
}
