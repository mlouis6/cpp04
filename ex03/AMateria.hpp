/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:39 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 10:07:51 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
// # include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string m_type;

	public:
		AMateria() {};
		AMateria(std::string const & type);
		AMateria(AMateria const & cpy);
		AMateria&	operator=(AMateria const & cpy);
		~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
