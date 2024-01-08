/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 15:40:46 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	std::cout << "===========================test four functions===========================" << std::endl;
	ClapTrap a("Test1");

	//attack
	a.attack("B");
	//hit_points 10→6
	a.takeDamage(4);
	//hit_points 6→16
	a.beRepaired(10);
	
	std::cout << "===========================test about hit points===========================" << std::endl;
	//hit_points 16→0
	a.takeDamage(20);
	//can't be repaired
	a.beRepaired(10);
	
	std::cout << "===========================test about energy points===========================" << std::endl;
	ClapTrap b("Test2");
	int i = 0;
	//energy_points 10→0
	while (i < 10) {
		b.attack("B");
		i++;
	}
	//cann't be repaired
	b.beRepaired(10);
	
	std::cout << "===========================test about copy constructor===========================" << std::endl;
	ClapTrap c("Test3");
	ClapTrap d(c);
	ClapTrap e = d;
	//attack
	c.attack("B");
	d.attack("B");
	e.attack("B");
	return 0;
}