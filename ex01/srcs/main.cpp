/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:33:27 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 17:14:17 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();


	// delete j;
	// delete i;
	
	const Animal* animalArray[4];

	for (int i = 0; i < 2; i++)
	{
		animalArray[i] = new Dog();
	}
	
	for (int i = 2; i < 4; i++)
	{
		animalArray[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
	{
		animalArray[i]->makeSound();
		delete animalArray[i];
	}
	

	return (0);
}