/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:38:41 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/20 16:46:36 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		Brain &operator=(const Brain& other);
		~Brain();

		std::string ideas[100];
};