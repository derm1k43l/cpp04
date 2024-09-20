/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:56:08 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 17:08:21 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat"), brain_(new Brain())
{
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain_;
		brain_ = new Brain(*other.brain_);
	}
	std::cout << "Cat assignation operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow. " << std::endl;
}