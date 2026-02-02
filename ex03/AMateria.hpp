/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:39 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 11:30:33 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;
class AMateria
{
	protected:
		std::string	m_type;

	public:
		AMateria() {};
		AMateria(const std::string& type);
		AMateria(const AMateria & cpy);
		AMateria&	operator=(const AMateria& cpy);
		virtual ~AMateria() {};

		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;
};

#endif
