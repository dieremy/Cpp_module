//
// Created by test on 8/6/24.
//

#ifndef CPP_MODULE_MAIN_HPP
#define CPP_MODULE_MAIN_HPP

#include <exception>

template<typename T>
class Array {
private:
	unsigned int len;
	T *a;

public:
	Array() : len(0), a(new T[0]) {};

	Array(unsigned int n) : len(n), a(new T[n]) {};

	Array(const Array &arr) {
		this->a = new T[arr.len];
		this->len = arr.len;
		for (unsigned int x = 0; x < arr.len; x++)
			this->a[x] = arr.a[x];
	}

	~Array() {
		delete[] this->a;
	}

	Array &operator=(const Array &arr) {
		if (this != &arr) {
			this->~Array();
			this->len = arr.len;
			this->a = new T[arr.len];
			for (unsigned int x = 0; x < arr.len; x++) {
				this->_a[x] = arr._a[x];
			}
		}
		return *this;
	}

	T &operator[](unsigned int i) {
		if (i >= this->len)
			throw OutOfBoundsException();
		return this->a[i];
	}

	unsigned int size() {
		return this->len;
	}

	class OutOfBoundsException : public std::exception {
		public:
			const char *what() const throw() {
				return ("Element is out of bounds");
			}
	};

};


#endif //CPP_MODULE_MAIN_HPP
