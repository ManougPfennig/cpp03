#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	private:

	public:
			FragTrap( void );
			~FragTrap();
			FragTrap (std::string name);
			FragTrap(const FragTrap& copy);

	void	highFivesGuys( void );

};

#endif