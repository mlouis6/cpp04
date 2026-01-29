/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:53:00 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 15:15:55 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal& cpy);
		Animal& operator=(const Animal& cpy);
		virtual ~Animal();

		std::string	getType() const;

		virtual void makeSound() const;

	protected:
		std::string m_type;
};

#endif
