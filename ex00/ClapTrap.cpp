#include "ClapTrap.hpp"

// CONSTRUCTOR

ClapTrap::ClapTrap( void ){

	std::cout << "Default ClapTrap constructed" << std::endl;
	this->_name.clear();
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap( std::string name ){

	std::cout << "Named ClapTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & copy ){

	std::cout << "Copy ClapTrap constructed from: (" << copy._name << ")" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

// DESTRUCTOR

ClapTrap::~ClapTrap( void ){

	if (this->_name.length())
		std::cout << "ClapTrap destroyed: " << this->_name << std::endl;
	else
		std::cout << "ClapTrap destroyed: (Unnamed)" << this->_name << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target){

	if (this->_name.length())
		std::cout << this->_name;
	else
		std::cout << "(Default)";
	if (this->_hitPoints <= 0)
		std::cout << ": No hitPoints left to attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << ": No energyPoints left to attack" << std::endl;
	else
		std::cout << ": attacked " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (this->_name.length())
		std::cout << this->_name;
	else
		std::cout << "(Default)";
	std::cout << ": took " << amount << " damage (" << this->_hitPoints << ")->(";
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "0) : KO";
	}
	else
		std::cout << this->_hitPoints << ")";
	std::cout << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_name.length())
		std::cout << this->_name;
	else
		std::cout << "(Default)";
	if (this->_energyPoints <= 0)
	{
		std::cout << ": no hitPoints left for repair" << std::endl;
		return ;
	}
	std::cout << ": was repaired by " << amount << " points ";
	std::cout << "(" << this->_hitPoints << ")->(";
	this->_hitPoints += amount;
	std::cout << this->_hitPoints << ")" << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ClapTrap::removeEnergy(void){

	this->_energyPoints = 0;
	return ;
}
