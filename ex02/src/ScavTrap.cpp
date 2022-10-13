/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 17:41:07 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 17:41:07 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;

	_hitPoints		= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	std::cout << "ScavTrap constructor with name called" << std::endl;

	_hitPoints		= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " could not attack!" << std::endl;
		return;
	}

	std::cout << "ScavTrap " << _name << " attacks " << target << ", "
				"dealing " << _attackDamage << " points of damage!" << std::endl;

	--_energyPoints;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}
