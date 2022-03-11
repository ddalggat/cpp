#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;


	std::cout << "******************** wrong cat ******************" << std::endl;

	const WrongAnimal *wa = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();

	std::cout << wa->getType() << std::endl;
	std::cout << wc->getType() << std::endl;
	wa->makeSound();
	wc->makeSound();


	delete wa;
	delete wc;
	
	return 0;
}