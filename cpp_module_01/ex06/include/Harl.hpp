#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <fstream>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define MAGENTA	"\033[0;35m"
# define BLACK		"\033[0;30m"
# define VIOLET		"\033[0;35m"
# define WHITE		"\033[0;37m"
# define ORANGE		"\033[0;94m"
# define GREEN		"\033[0;32m"
# define BLUE		"\033[0;34m"
# define CYAN		"\033[0;36m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

class Harl
{
    private:
        void	debug( void );
        void	info( void );
        void	warning( void );
        void	error( void );
		void	cicle( int i );
		
    public:
		void	complain( std::string level );
		
        Harl();
        ~Harl();
};

enum	e_msg { DEBUG, INFO, WARNING, ERROR };

#endif