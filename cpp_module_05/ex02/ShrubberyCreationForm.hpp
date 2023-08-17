#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &other);

        void                    execute(Bureaucrat const &executor) const;
};

#endif

// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.