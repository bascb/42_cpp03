/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:29:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/13 19:43:24 by bcastelo         ###   ########.fr       */
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
	std::cout << "**** Copy constructor ****" << std::endl;
	DiamondTrap z2( z1 );
	std::cout << "**** Copy assignemt 1 ****" << std::endl;
	DiamondTrap z3 = z2;
	
	std::cout << "**** Copy assignemt 2 ****" << std::endl;
	z3 = z1;
	std::cout << "**** Who Am I ****" << std::endl;
	z1.whoAmI();
	z2.whoAmI();
	z3.whoAmI();
	std::cout << "**** War ****" << std::endl;
	z1.attack("Target 1");
	z2.highFivesGuys();
	z1.guardGate();
	std::cout << "**** Destructors time ****" << std::endl;
	return (0);
}