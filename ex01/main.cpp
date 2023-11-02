/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/02 03:52:51 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2(scavTrap);
	ScavTrap scavTrap3;
	scavTrap3 = scavTrap2;
	scavTrap.attack("target");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();
	return (0);
}