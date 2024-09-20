/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:33:27 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 16:33:50 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal(); // Heap allocation
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	// std::cout << " ------------- the wrong cat should print wrong animal" << std::endl;
	// WrongCat k;
	// std::cout << k.getType() << std::endl;
	// k.makeSound(); // shuld not be overridden


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	meta->makeSound(); // this demonstrates that the function is virtual


	// std::cout << "------------- Wrong Cat Messages" << std::endl;
	// WrongCat x; 						// Stack allocation
	// std::cout << x.getType() << std::endl;
	// x.makeSound(); // will output the cat sound! it overrides the base class 

	// std::cout << "------------- Wrong Animal Messages" << std::endl;
	// WrongAnimal xx; 						// Stack allocation
	// std::cout << xx.getType() << std::endl;
	// xx.makeSound(); // this will output the default defined in the base class
	
	delete meta;
	delete j;
	delete i;

	return (0);
}