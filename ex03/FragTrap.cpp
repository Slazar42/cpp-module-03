/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 00:23:20 by slazar            #+#    #+#             */
/*   Updated: 2023/11/05 00:11:07 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int FragTrap::hit_pts = 100;
const int FragTrap::attack_dmg = 30;

FragTrap::FragTrap()
{
	name = "Default";
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap destructor called from \""<<name<<"\""<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "FragTrap constructor called with name : \""<<name<<"\"" << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	if (&obj != this)
	{
		std::cout<<"FragTrap assignation copying form \""<<obj.name<<"\" operator called"<<std::endl;
		name = obj.name;
		hit_points = obj.hit_points;
		energy_points = obj.energy_points;
		attack_damage = obj.attack_damage;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout<<"FragTrap copy constructor called to copy from \""<<obj.name<<"\""<<std::endl;
	*this = obj;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap Says : \"High five guys!\"" << std::endl;
}
