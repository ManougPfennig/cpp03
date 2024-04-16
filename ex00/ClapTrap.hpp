#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	private:

			std::string	_name;
			int			_hitPoints; //health
			int			_energyPoints;
			int			_attackDamage;
	
	public:

			ClapTrap( void );
			~ClapTrap( void );
			ClapTrap( std::string name );
			ClapTrap( const ClapTrap & copy );

			void		attack( const std::string& target );
			void		takeDamage( unsigned int amount );
			void		beRepaired( unsigned int amount );

			void		removeEnergy( void );

};

#endif