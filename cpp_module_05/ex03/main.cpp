#include "Intern.hpp"

int main()
{
    Intern	InternA;
    Intern	InternB;
    Intern	InternC;
    Form*	a;
    Form*	b;
    Form*	c;
    Form*	d;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    a = InternA.makeForm("RobotomyRequestForm", "Pony");
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;
    b = InternB.makeForm("PresidentialPardonForm", "Barbie");
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;
    c = InternC.makeForm("ShrubberyCreationForm", "Terminator");
        std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    try 
    {
        d = InternC.makeForm("maybe tomorrow", "maybe yesterday");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    delete a;
    delete b;
    delete c;
    return (0);
}