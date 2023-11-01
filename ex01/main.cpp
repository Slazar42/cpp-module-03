/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/01 09:44:02 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("a");
	ClapTrap b("b");
	ClapTrap c("c");
	
	a.attack("b");
	b.takeDamage(2);
	b.beRepaired(1);
	b.attack("c");
	c.takeDamage(1);
	c.beRepaired(2);
	return (0);
}