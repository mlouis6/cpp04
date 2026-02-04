/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:39 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/04 13:16:15 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;
class AMateria
{
	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria & cpy);
		virtual ~AMateria() {};

		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;

	protected:
		std::string	m_type;

	private:
		AMateria&	operator=(const AMateria& cpy);

};

#endif
