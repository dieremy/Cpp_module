#include "Serialize.hpp"

uintptr_t	serialize(Data *d)
{
	return (reinterpret_cast<uintptr_t>(d));
}

Data		*deserialize(uintptr_t p)
{
	return (reinterpret_cast<Data*>(p));
}
