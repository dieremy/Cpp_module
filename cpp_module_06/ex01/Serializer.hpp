#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <cstring>
# include <iostream>

struct Data {
	std::string s1;
	std::string s2;
	int i;
};

class Serializer {
public:

	Serializer() {};

	~Serializer() {};

	Serializer(const Serializer &obj) {
		(void) obj;
	};

	Serializer &operator=(const Serializer &obj) {
		(void) obj;
		return *this;
	};

	uintptr_t serialize(Data *d);

	Data *deserialize(uintptr_t p);
};


#endif