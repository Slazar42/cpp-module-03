/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:13:39 by slazar            #+#    #+#             */
/*   Updated: 2023/11/03 04:37:37 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj);
		FragTrap &operator=(const FragTrap &obj);
		void highFivesGuys(void);
};

#endif