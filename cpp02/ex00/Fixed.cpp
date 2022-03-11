#include "Fixed.hpp"

Fixed::Fixed(void){
	number = 0;
	std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) { 
	std::cout << "Copy constructor called" << std::endl; 
	*this = f;}

Fixed& Fixed::operator = (const Fixed &a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(a.getRawBits());
    return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
	}
void	Fixed::setRawBits(int const raw) {number = raw;}
