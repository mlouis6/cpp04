/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:21:28 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 15:33:25 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal& operator=(const WrongAnimal& cpy);
		virtual ~WrongAnimal();

		std::string	getType() const;

		void makeSound() const;

	protected:
		std::string m_type;
};

#endif
