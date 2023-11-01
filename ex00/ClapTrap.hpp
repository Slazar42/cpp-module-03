/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 07:48:59 by slazar            #+#    #+#             */
/*   Updated: 2023/11/01 08:06:27 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private :
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public :
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &obj);
		std::string	getName(void) const;
		int			getHitpoints(void) const;
		int			getEnergy_points(void) const;
		int			getAttack_damage(void) const;
		void		setName(std::string n);
		void		setHitpoints(int h);
		void		setEnergy_points(int e_p);
		void		setAttack_damage(int a_d);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif