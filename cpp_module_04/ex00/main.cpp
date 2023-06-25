#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *A = new Animal();
	const Animal *C = new Cat();
	const Animal *D = new Dog();
	const WrongAnimal *wA = new WrongAnimal();
	const WrongAnimal *wC = new WrongCat();

	std::cout << C->getType() << std::endl;
	std::cout << D->getType() << std::endl;
	std::cout << wA->getType() << std::endl;
	std::cout << wC->getType() << std::endl;

	A->makeSound();
	C->makeSound();
	D->makeSound();
	wA->makeSound();
	wC->makeSound();

	delete wC;
	delete wA;
	delete D;
	delete C;
	delete A;

	return (0);
}