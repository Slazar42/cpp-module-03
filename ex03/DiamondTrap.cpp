/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:34:14 by slazar            #+#    #+#             */
/*   Updated: 2023/11/05 00:16:56 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
	this->name = "Default";
	hit_points = FragTrap::hit_pts;
	energy_points = ScavTrap::energy_pts;
	attack_damage = FragTrap::attack_dmg;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap destructor called from \""<<name<<"\""<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :  FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout<<"DiamondTrap constructor called with name \""<<name<<"\""<<std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	hit_points = FragTrap::hit_pts;
	energy_points = ScavTrap::energy_pts;
	attack_damage = FragTrap::attack_dmg;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (&obj != this){
		std::cout<<"FragTrap assignation copying form \""<<obj.name<<"\" operator called"<<std::endl;
		name = obj.name;
		hit_points = obj.hit_points;
		energy_points = obj.energy_points;
		attack_damage = obj.attack_damage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout<<"DiamondTrap copy constructor called to copy from \""<<obj.name<<"\""<<std::endl;
	*this = obj;
}

void				DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void				DiamondTrap::whoAmI()
{
	std::cout<<"DiamondTrap says : My name is \""<<name<<"\" and my ClapTrap name is \""<<ClapTrap::name<<"\""<<std::endl;
}