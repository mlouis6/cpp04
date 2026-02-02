/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:53:51 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 11:03:13 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource&	operator=(const MateriaSource& cpy);
		~MateriaSource();

		void        learnMateria(AMateria*);
		AMateria*   createMateria(const std::string& type);
	
	private:
		AMateria*	m_materias[4];
};

#endif