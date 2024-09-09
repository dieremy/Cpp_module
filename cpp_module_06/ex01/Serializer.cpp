#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *d) {
	return (reinterpret_cast<uintptr_t>(d));
}

Data *Serializer::deserialize(uintptr_t p) {
	return (reinterpret_cast<Data *>(p));
}
