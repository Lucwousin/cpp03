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

#include <ClapTrap.hpp>

int	main(void) {
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
		for (int i = 0; i < 13; i++)
		{
			c.beRepaired(5);
			c.takeDamage(5);
		}
		c.attack("target");
		std::cout << "\n";
	}

	b = ClapTrap(b);
	b.beRepaired(1);
}