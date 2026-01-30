/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:10:17 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 15:50:26 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	// std::cout << "*** AAnimal ***" << std::endl;
	// const AAnimal* meta = new AAnimal();
	// std::cout << meta->getType() << std::endl;
	// meta->makeSound();
	// delete meta;

	std::cout << "\n*** DOG ***" << std::endl;
	const AAnimal* d = new Dog();
	std::cout << d->getType() << std::endl;
	d->makeSound();
	delete d;

	std::cout << "\n*** CAT ***" << std::endl;
	Cat* c = new Cat();
	std::cout << c->getType() << std::endl;
	c->makeSound();
	
	std::cout << "\n\nIDEASstart (c)\n";
	c->getBrain().addIdea("i");
	c->getBrain().addIdea("am");
	c->getBrain().addIdea("a");
	c->getBrain().addIdea("cat");
	std::cout << c->getBrain();
	std::cout << "endIDEAS\n\n";

	std::cout << "\n*** CPY CAT ***" << std::endl;
	Cat*	cp = new Cat(*c);

	std::cout << "IDEASstart (cp)\n";
	cp->getBrain().addIdea("im a copy");
	cp->getBrain().addIdea("but still a cat");
	std::cout << cp->getBrain();
	std::cout << "endIDEAS\n\n";
	std::cout << "IDEASstart (c)\n";
	std::cout << c->getBrain();
	std::cout << "endIDEAS\n\n";

	delete cp;

	Cat* cc = new Cat();
	*cc = *c;
	std::cout << "IDEASstart (cc)\n";
	cc->getBrain().addIdea("not the original");
	cc->getBrain().addIdea("powpowpow");
	std::cout << cc->getBrain();
	std::cout << "endIDEAS\n\n";
	std::cout << "IDEASstart (c)\n";
	std::cout << c->getBrain();
	std::cout << "endIDEAS\n\n";
	delete cc;

	delete c;

	std::cout << "\n\nNon alloc" << std::endl;
	Cat cn;
	cn.getBrain().addIdea("lolol");
	std::cout << cn.getBrain() << std::endl;
	Cat cm(cn);
	cm.getBrain().addIdea("bob");
	cn.getBrain().addIdea("lolol2");
	std::cout << cm.getBrain() << std::endl;
	std::cout << cn.getBrain() << std::endl;
	Cat co;
	co = cn;
	co.getBrain().addIdea("ding");
	cn.getBrain().addIdea("lolol3");
	std::cout << co.getBrain() << std::endl;
	std::cout << cn.getBrain() << std::endl;
	std::cout << "endNon alloc\n" << std::endl;

	int		nb_obj = 6;
	AAnimal*	AAnimals[nb_obj];
	int 	i = 0;

	std::cout << "\nDOGS" << std::endl;
	for (; i < nb_obj / 2 ; ++i)
	{
		AAnimals[i] = new Dog();
	}
	std::cout << "\nCATS" << std::endl;
	for (; i < nb_obj ; ++i)
	{
		AAnimals[i] = new Cat();
	}

	AAnimals[0]->getBrain().addIdea("who's a good boy?");
	std::cout << AAnimals[0]->getBrain();

	std::cout << "\nBYE" << std::endl;
	for (int j = 0; j < nb_obj ; ++j)
		delete AAnimals[j];
}
