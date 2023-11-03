/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:30:21 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 05:30:06 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamonTrap : public FragTrap, public ClapTrap {
	private:
		std::string name;
	public:
		DiamonTrap();
		~DiamonTrap();
		DiamonTrap(std::string name);
		DiamonTrap &operator=(const DiamonTrap &obj);
		DiamonTrap(const DiamonTrap &obj);
		void whoAmI();
};

#endif