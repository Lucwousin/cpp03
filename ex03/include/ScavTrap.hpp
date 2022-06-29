/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 17:41:05 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 17:41:05 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <ClapTrap.hpp>

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &other);
		ScavTrap(const string &name);

		~ScavTrap(void);

		void	attack(const string &target);
		void	guardGate(void);
};

#endif //SCAVTRAP_HPP
