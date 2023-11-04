/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/05 00:51:08 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	DiamondTrap diamondTrap("Dodo");
	DiamondTrap diamondTrap2;
	diamondTrap2 = diamondTrap;
	diamondTrap.attack("target");
	diamondTrap.takeDamage(50);
	diamondTrap.beRepaired(5);
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
	diamondTrap.whoAmI();
}