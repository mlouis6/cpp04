/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:53:00 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 15:47:26 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <string>
# include <Brain.hpp>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal& cpy);
		AAnimal& operator=(const AAnimal& cpy);
		virtual ~AAnimal();

		virtual std::string	getType() const;

		virtual void makeSound() const = 0;
		virtual Brain& getBrain() const = 0;

	protected:
		std::string m_type;
};

#endif
