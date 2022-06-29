/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 17:41:05 by lsinke        #+#    #+#                 */
/*   Updated: 2022/06/29 17:41:05 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <ClapTrap.hpp>

class FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap(const string &name);

		~FragTrap(void);

		void	attack(const string &target);
		void	highFivesGuys(void);
};

#endif //FragTrap_HPP
