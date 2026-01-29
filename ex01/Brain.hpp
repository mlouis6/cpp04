/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:03:34 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 13:06:30 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& cpy);
		~Brain();

		std::string ideas[100];
};

#endif
