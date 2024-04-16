#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:

	public:
			ScavTrap( void );
			~ScavTrap();
			ScavTrap (std::string name);
			ScavTrap(const ScavTrap& copy);

	void	guardGate( void );

};

#endif