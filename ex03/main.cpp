/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:29:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/12 22:35:59 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main( void )
{
	DiamondTrap z1("Weird");
	DiamondTrap z2( z1 );
	DiamondTrap z3 = z2;
	
	z3 = z1;
	z1.whoAmI();
	z2.whoAmI();
	z3.whoAmI();
	z1.getData();
	z1.attack("Target 1");
	z2.highFivesGuys();
	return (0);
}