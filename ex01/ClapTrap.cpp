/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:02:25 by slazar            #+#    #+#             */
/*   Updated: 2023/11/02 22:04:03 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout<<"ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap constructor called with name : \""<<name<<"\"" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout<<"ClapTrap copy constructor called to copy from \""<<obj.name<<"\""<<std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap destructor called from \""<<name<<"\""<<std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj){
	if (&obj != this){
		std::cout<<"ClapTrap assignation copying form \""<<obj.name<<"\" operator called"<<std::endl;
		name = obj.name;
		hit_points = obj.hit_points;
		energy_points = obj.energy_points;
		attack_damage = obj.attack_damage;
	}
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if(hit_points <= 0 || energy_points <= 0)
		return ;
	energy_points -= 1;
	std::cout<<"ClapTrap \""<<name<<"\" attacks \""<<target<<"\", causing "<<attack_damage<<" points of damage!"<<std::endl;
}


void		ClapTrap::takeDamage(unsigned int amount)
{
	if(hit_points <= 0 || energy_points <= 0)
		return ;
	std::cout<<"ClapTrap \""<<name<<"\" takes "<<amount<<" points of damage!"<<std::endl;
	hit_points -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if(hit_points <= 0 || energy_points <= 0)
		return ;
	std::cout<<"ClapTrap \""<<name<<"\" is repaired by "<<amount<<" points!"<<std::endl;
	hit_points += amount;
	energy_points -= 1;
}
