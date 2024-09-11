//
// Created by test on 8/6/24.
//

#ifndef CPP_MODULE_REALTYPE_HPP
#define CPP_MODULE_REALTYPE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
	Base() {};
    virtual ~Base() {};
};

class A : public Base {
public:
    A() {};
    ~A() {};
};

class B : public Base {
public:
    B() {};
    ~B() {};
};

class C : public Base
{
public:
	C() {};
	~C() {};
};

#endif //CPP_MODULE_REALTYPE_HPP
