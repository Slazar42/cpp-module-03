/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 02:26:46 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap scavTrap("ScavTrap");
	ClapTrap clapTrap("ClapTrap");

	std::cout << std::endl;
	scavTrap.attack("target");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	std::cout << std::endl;
	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	std::cout << std::endl;
}