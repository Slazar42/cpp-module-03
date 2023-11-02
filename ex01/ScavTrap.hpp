/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:44:02 by slazar            #+#    #+#             */
/*   Updated: 2023/11/02 05:53:21 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &obj);
		void attack(std::string const & target);
		void guardGate();
};
#endif