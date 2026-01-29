/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:10:17 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 13:36:04 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "*** ANIMAL ***" << std::endl;
	const Animal* meta = new Animal();
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;

	std::cout << "\n*** DOG ***" << std::endl;
	const Animal* d = new Dog();
	std::cout << d->getType() << std::endl;
	d->makeSound();
	delete d;

	std::cout << "\n*** CAT ***" << std::endl;
	Cat* c = new Cat();
	std::cout << c->getType() << std::endl;
	c->makeSound();
	
	std::cout << "\n*** CPY CAT ***" << std::endl;
	Cat*	cp = new Cat(*c);
	delete cp;

	Cat* cc = new Cat();
	*cc = *c;
	delete cc;
	delete c;

	Cat cn;
	Cat cm(cn);
	Cat co;
	co = cn;
}
