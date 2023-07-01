#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	B( "Britney Spears", 1 );
	
	std::cout << "grade first time: " << B.getGrade() << std::endl;
	B.decreaseGrade(10);
	std::cout << "grade second time: " << B.getGrade() << std::endl;
	B.decreaseGrade(6);
	std::cout << "grade third time: " << B.getGrade() << std::endl;
	
	try
	{
		B.decreaseGrade(666);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "grade last time: " << B.getGrade() << std::endl;


	return (0);
}
