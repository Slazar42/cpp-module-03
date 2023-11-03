/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:34:14 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 04:34:46 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamonTrap::DiamonTrap() : ClapTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}