/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 17:41:07 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 17:41:07 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;

	_hitPoints		= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	std::cout << "FragTrap constructor with name called" << std::endl;

	_hitPoints		= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "FragTrap " << _name << " could not attack!" << std::endl;
		return;
	}

	std::cout << "FragTrap " << _name << " attacks " << target << ", "
				"dealing " << _attackDamage << " points of damage!" << std::endl;

	--_energyPoints;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " got a positive high fives request" << std::endl;
}
