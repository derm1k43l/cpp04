/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:56:05 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 17:06:31 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog"), brain_(new Brain())
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other); 			// copy the base class
		delete brain_; 						// delet old brain
		brain_ = new Brain(*other.brain_); 	// create new brain
	}
	std::cout << "Dog assignation operator called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain_; 								// free brain memory
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WHOF WHOF WHOF!!!" << std::endl;
}