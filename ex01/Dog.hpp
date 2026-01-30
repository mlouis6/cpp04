/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:59:11 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 14:27:59 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& cpy);
		~Dog();

		void makeSound() const;
		Brain& getBrain() const;

	private:
		Brain* brain;
};

#endif
