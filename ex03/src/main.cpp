/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 16:55:09 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 16:55:09 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

static void	clapTrapTests(void) {
	ClapTrap b;

	{
		ClapTrap a("One");
		for (int i = 0; i < 11; i++)
			a.attack("target");
		std::cout << "\n";

		b = a;
	}
	b.attack("target");
	std::cout << "\n";

	{
		ClapTrap c;
		for (int i = 0; i < 13; i++) {
			c.beRepaired(5);
			c.takeDamage(5);
		}
		c.attack("target");
		std::cout << "\n";
	}

	b = ClapTrap(b);
	b.beRepaired(1);
}

static void	scavTrapTests(void) {
	ScavTrap sA("name");
	ScavTrap sB;
	sB.attack("target");
	sB.attack("target");
	sB = sA;
	sB.guardGate();
	{
		ScavTrap sC = ScavTrap(sA);
		sC.takeDamage(99);
		sC.beRepaired(1);
		sC.takeDamage(2);
		sC.beRepaired(1);
		sC.takeDamage(1);
	}
}

static void	fragTrapTests(void) {
	FragTrap sA("name");
	FragTrap sB;
	sB.attack("target");
	sB.attack("target");
	sB = sA;
	sB.highFivesGuys();
	{
		FragTrap sC = FragTrap(sA);
		sC.takeDamage(99);
		sC.beRepaired(1);
		sC.takeDamage(2);
		sC.beRepaired(1);
		sC.takeDamage(1);
	}
}

static void	diamondTrapTests(void) {
	{
		DiamondTrap trap;
	}
	{
		DiamondTrap trap = DiamondTrap("name");
		trap.attack("target");
		trap.takeDamage(100);
		trap.takeDamage(1);
		trap.whoAmI();
		DiamondTrap other(trap);
	}
	{
		DiamondTrap a = DiamondTrap("a");
		DiamondTrap b = DiamondTrap("b");
		b = a;
		b.highFivesGuys();
		b.guardGate();
		b.whoAmI();
	}
}

int	main(void) {
	clapTrapTests();
	std::cout << "\nClapTrap tests done\n\n";

	scavTrapTests();
	std::cout << "\nScavTrap tests done\n\n";
	
	fragTrapTests();
	std::cout << "\nFragTrap tests done\n\n";

	diamondTrapTests();
	std::cout << "\nDiamondTrap tests done\n\n";
}