/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:03:34 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 11:43:17 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iosfwd>

class Brain
{
	public:
		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& cpy);
		~Brain();
		void	addIdea(const std::string& idea);
		int		getMaxIdeas() const;
		std::string	getIdea(int index) const;

	private:
		static const int g_max_ideas = 100;
		std::string m_ideas[g_max_ideas];

};

std::ostream& operator<<(std::ostream& os, const Brain& b);

#endif
