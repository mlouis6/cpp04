/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:54:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/05 11:53:10 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
#include "AMateria.hpp"
# include <string>

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& cpy);
		Character&	operator=(const Character& cpy);
		~Character();

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		static AMateria*	getFromFloor(int idx);
		static void			wipeFloor();
	private:
		std::string			m_name;
		AMateria*  			m_equipment[4];
		static AMateria*	g_floor[100];
		void				throwFloor(AMateria* m);
};

#endif