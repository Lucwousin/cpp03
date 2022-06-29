/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 16:55:12 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 16:55:12 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

using std::cout;

ClapTrap::ClapTrap(void) {
	cout << "ClapTrap default constructor called" << std::endl;

	_hitPoints		= 10;
	_energyPoints	= 10;
	_attackDamage	= 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	cout << "ClapTrap copy constructor called" << std::endl;

	_name			= other._name;
	_hitPoints		= other._hitPoints;
	_energyPoints	= other._energyPoints;
	_attackDamage	= other._attackDamage;
}

ClapTrap::ClapTrap(const string &name) {
	cout << "ClapTrap constructor with name called" << std::endl;

	_name			= name;
	_hitPoints		= 10;
	_energyPoints	= 10;
	_attackDamage	= 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	cout << "ClapTrap assignment operator called" << std::endl;

	if (this != &rhs) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const string &target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		cout << "Claptrap "	<< _name	<< " "
				"could not attack!"		<< std::endl;
		return;
	}

	cout << "ClapTrap "	<< _name			<< " "
			"attacks "	<< target			<< ", "
			"dealing "	<< _attackDamage	<< " "
			"points of damage!"				<< std::endl;
	
	--_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		cout << "Claptrap "	<< _name	<< " "
				"is already dead!"		<< std::endl;
		return;
	}

	cout << "ClapTrap "	<< _name	<< " "
			"takes "	<< amount	<< " "
			"points of damage!"		<< std::endl;

	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		cout << "Claptrap "	<< _name	<< " "
				"could not repair!"		<< std::endl;
		return;
	}

	cout << "ClapTrap "			<< _name	<< " "
			"is repaired for "	<< amount	<< " "
			"points of damage!"	<< std::endl;

	_hitPoints += amount;
	--_energyPoints;
}
