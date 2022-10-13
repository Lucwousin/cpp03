/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 18:51:03 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 18:51:03 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <FragTrap.hpp>
# include <ScavTrap.hpp>

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(const std::string &name);

		DiamondTrap &operator=(const DiamondTrap &rhs);

		~DiamondTrap(void);

		void	attack(const std::string &target);
		void	whoAmI(void);

	private:
		std::string	_name;
};

#endif //DIAMONDTRAP_HPP
