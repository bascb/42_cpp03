/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:41:57 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/13 19:42:00 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap , public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string NewName );
		DiamondTrap( const DiamondTrap& );
		DiamondTrap&	operator=( const DiamondTrap& );
		~DiamondTrap( void );
		void	whoAmI( void );
	private:
		std::string	Name;
};

#endif