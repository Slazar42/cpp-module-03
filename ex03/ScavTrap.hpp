/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:44:02 by slazar            #+#    #+#             */
/*   Updated: 2023/11/05 00:08:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &obj);

		void				attack(const std::string& target);
		void				guardGate();
		static const int	energy_pts;
};
#endif