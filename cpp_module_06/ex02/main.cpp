//
// Created by test on 8/6/24.
//

#include "RealType.hpp"

Base* generate() {
    std::cout << "Generated class: ";

    int r = rand() % 3;
    if (r == 0) {
        std::cout << "A";
        return new A();
    } else if (r == 1) {
        std::cout << "B";
        return new B();
    } else {
        std::cout << "C";
        return new C();
    }
}

void identify(Base* x) {
    std::cout << "Identified by pointer: ";

    if (dynamic_cast<A*>(x)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(x)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(x)) {
        std::cout << "C" << std::endl;
    } else {
        std::cerr << "bad cast" << std::endl;
    }
}

void identify(Base& x) {
    std::cout << "Identified by reference: ";

    if (&x == dynamic_cast<A*>(&x)) {
        std::cout << "A" << std::endl;
    } else if (&x == dynamic_cast<B*>(&x)) {
        std::cout << "B" << std::endl;
    } else if (&x == dynamic_cast<C*>(&x)) {
        std::cout << "C" << std::endl;
    } else {
        std::cerr << "bad cast" << std::endl;
    }
}

// int main() {
// 	srand(time(NULL));

// 	Base* x = generate();
// 	std::cout << " -> pointer" << std::endl;

// 	Base* y = generate();
// 	Base& z = *y;
// 	std::cout << " -> reference" << std::endl;

// 	identify(x);
// 	identify(z);

// 	delete x;
// 	delete y;
// }

int	main(void) {
	Base* x = generate();

	identify(x);

	identify(*x);

	delete x;
}