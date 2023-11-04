/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:30:21 by slazar            #+#    #+#             */
/*   Updated: 2023/11/04 22:43:12 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &obj);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &obj);
		void				attack(const std::string& target);
		void				whoAmI();
};

#endif