/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:52:58 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/10 12:10:21 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string NewName );
		//ScavTrap( const ScavTrap& );
		//ScavTrap&	operator=( const ScavTrap& );
		~ScavTrap( void );
		void	attack(const std::string& target);
		void	guardGate( void );
};

#endif