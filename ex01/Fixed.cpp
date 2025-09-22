/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:52:05 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/22 19:56:55 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : raw_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->raw_ = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return raw_;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	raw_ = raw;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	raw_ = raw << fractBits;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	raw_ = static_cast<int>(roundf(raw * (1 << fractBits)));
}

float Fixed::toFloat() const
{
	return (static_cast<float>(raw_) / (1 << fractBits));
	// return raw_ / 256.0f; 
}

int Fixed::toInt() const
{
	return raw_ >> fractBits;
	// return raw_ / 256;	
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	return os << f.toFloat();
}