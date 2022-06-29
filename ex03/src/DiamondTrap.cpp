/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 18:52:16 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 18:52:16 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

using std::cout;

DiamondTrap::DiamondTrap(void) {
	cout << "DiamondTrap default constructor called" << std::endl;

	_hitPoints		= FragTrap::_hitPoints;
	_energyPoints	= ScavTrap::_energyPoints;
	_attackDamage	= FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
	ClapTrap(other), FragTrap(other), ScavTrap(other) {
	cout << "DiamondTrap copy constructor called" << std::endl;

	ClapTrap::_name	= other.ClapTrap::_name;
	_name			= other._name;
	_hitPoints		= other._hitPoints;
	_energyPoints	= other._energyPoints;
	_attackDamage	= other._attackDamage;
}

DiamondTrap::DiamondTrap(const string &name):
	ClapTrap(name + "_clap_name") {
	cout << "DiamondTrap constructor with name called" << std::endl;

	_name			= name;
	_hitPoints		= FragTrap::_hitPoints;
	_energyPoints	= ScavTrap::_energyPoints;
	_attackDamage	= FragTrap::_attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	cout << "DiamondTrap assignment operator called" << std::endl;

	if (this != &rhs) {
		ClapTrap::_name	= rhs.ClapTrap::_name;
		_name			= rhs._name;
		_hitPoints		= rhs._hitPoints;
		_energyPoints	= rhs._energyPoints;
		_attackDamage	= rhs._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	cout << "Hi, I'm DiamondTrap " << _name << ", "
			"but my ClapTrap name is " << ClapTrap::_name << std::endl;
}
