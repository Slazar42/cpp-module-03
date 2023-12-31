/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 03:34:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	FragTrap fragTrap("FragTrap");
	ScavTrap scavTrap("ScavTrap");
	ClapTrap clapTrap("ClapTrap");

	std::cout << std::endl;
	fragTrap.attack("target");
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	std::cout << std::endl;
	scavTrap.attack("target");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	std::cout << std::endl;
	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
}