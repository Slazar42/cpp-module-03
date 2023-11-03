/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:43:58 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 02:13:08 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "defaultFromScavTrap";
	std::cout << "ScavTrap default constructor called" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with name : \""<<name<<"\"" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout<<"ScavTrap copy constructor called to copy from \""<<obj.name<<"\""<<std::endl;
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
{
	if (&obj != this)
	{
		std::cout<<"ScavTrap assignation copying form \""<<obj.name<<"\" operator called"<<std::endl;
		name = obj.name;
		hit_points = obj.hit_points;
		energy_points = obj.energy_points;
		attack_damage = obj.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap destructor called from \""<<name<<"\""<<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap \"" << name << "\" has entered in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack(std::string const & target){
	if(hit_points <= 0 || energy_points <= 0)
		return ;
	energy_points -= 1;
	std::cout<<"ScavTrap \""<<name<<"\" attacks \""<<target<<"\", causing "<<attack_damage<<" points of damage!"<<std::endl;
}
