#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		std::string	_name;
		int			_hPoints;
		int			_ePoints;
		int			_aDamage;

	public:
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		void		setName( std::string name );
		void		setHp( int hp );
		void		setEp( int ep );
		void		setAd( int ad );

		std::string	getName( void ) const ;
		int			getHp( void ) const ;
		int			getEp( void ) const ;
		int			getAd( void ) const ;

		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &ct );
		~ClapTrap();

		ClapTrap	&operator=( const ClapTrap &ct );
};

#endif

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap
// • Energy points (10)
// • Attack damage (0)
// Add the following public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target);
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);