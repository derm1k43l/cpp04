/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:35:55 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 15:56:52 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Undefined Animal")
{
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(std::string type) : type_(type)
{
	std::cout << "Parametrized Animal constructor for " << type_ << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
		type_ = copy.type_;
	std::cout << "Animal copy constructor called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "It should be overriden by derived classes. And make a specific sound." << std::endl;
}

std::string Animal::getType() const
{
	return (type_);
}