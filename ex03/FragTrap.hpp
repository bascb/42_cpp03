/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:25:06 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/10 12:10:09 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string NewName );
		//FragTrap( const FragTrap& );
		//FragTrap&	operator=( const FragTrap& );
		~FragTrap( void );
		void	highFivesGuys( void );
};

#endif