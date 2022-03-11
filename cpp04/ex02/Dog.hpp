#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog& a);
	Dog& operator= (const Dog& a);
	~Dog();

	virtual void makeSound() const;
};

#endif
