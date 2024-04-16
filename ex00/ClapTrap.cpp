#include "ClapTrap.hpp"

// CONSTRUCTOR

ClapTrap::Claptrap( void ){

	std::cout << "Default ClapTrap constructed" << std::endl;
	this->_name.clear();
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::Claptrap( std::string name ){

	std::cout << "Named ClapTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::Claptrap( const ClapTrap & copy ){

	std::cout << "Copy ClapTrap constructed from: (" << copy._name << ")" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

// DESTRUCTOR

ClapTrap::Claptrap( void ){

	std::cout << "ClapTrap destroyed" << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target){

	if (this->_energyPoints <= 0)
	{
		std::cout << "No hitPoints left for attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacked " << target._name << ":";
	if (target._hitPoints <= 0)
	{
		std::cout << "target is already dead" << std::endl;
		return ;
	}
	target.takeDamage(this->_attackDamage);
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount){

	std::cout << this->_name << " took " << amount << " damage";
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << ": died";
	}
	std::cout << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_energyPoints <= 0)
	{
		std::cout << "No hitPoints left for repair." << std::endl;
		return ;
	}
	std::cout << this->_name << " was repaired by: " << amount << "points";
	std::cout << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	return ;
}