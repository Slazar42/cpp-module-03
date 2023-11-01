/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:34:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/01 10:00:35 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("a");
	ClapTrap b("b");
	ClapTrap c = a;
	
	a.attack("b");
	b.takeDamage(2);
	b.beRepaired(1);
	b.attack("c");
	c.takeDamage(1);
	c.beRepaired(2);
	return (0);
}