#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <cstring>
# include <iostream>

struct Data
{
	std::string	s1;
	std::string	s2;
	int			i;
};

uintptr_t	serialize(Data *d);
Data		*deserialize(uintptr_t p);

#endif