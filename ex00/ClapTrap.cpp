/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:02:25 by slazar            #+#    #+#             */
/*   Updated: 2023/11/01 08:13:53 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name)
{
	std::cout<<"ClapTrap constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout<<"ClapTrap copy constructor called"<<std::endl;
	name = obj.name;
	hitpoints = obj.hitpoints;
	energy_points = obj.energy_points;
	attack_damage = obj.attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap destructor called"<<std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout<<"ClapTrap assignation operator called"<<std::endl;
	name = obj.name;
	hitpoints = obj.hitpoints;
	energy_points = obj.energy_points;
	attack_damage = obj.attack_damage;

	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}

int			ClapTrap::getHitpoints(void) const
{
	return (hitpoints);
}

int			ClapTrap::getEnergy_points(void) const
{
	return (energy_points);
}

int			ClapTrap::getAttack_damage(void) const
{
	return (attack_damage);
}

void		ClapTrap::setName(std::string n)
{
	Name = n;
}

void		ClapTrap::setHitpoints(int h)
{
	Hitpoints = h;
}

void		ClapTrap::setEnergy_points(int e_p)
{
	Energy_points = e_p;
}

void		ClapTrap::setAttack_damage(int a_d)
{
	Attack_damage = a_d;
}

void		ClapTrap::attack(const std::string& target)
{
	if(Hitpoints == 0)
	{
		std::cout<<"ClapTrap "<<Name<<" is dead, he can't attack"<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<", causing "<<Attack_damage<<" points of damage!"<<std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if(Hitpoints == 0)
	{
		std::cout<<"ClapTrap "<<Name<<" is already dead, he can't take damage"<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<Name<<" takes "<<amount<<" points of damage!"<<std::endl;
	Hitpoints -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if(Hitpoints == 0)
	{
		std::cout<<"ClapTrap "<<Name<<" is dead, he can't be repaired"<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<Name<<" is repaired by "<<amount<<" points!"<<std::endl;
	Hitpoints += amount;
}