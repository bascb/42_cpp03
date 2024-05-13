/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:29:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/13 19:17:21 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main( void )
{
	std::cout << "****** ClapTrap construction *******" << std::endl;
	ClapTrap	soldier1("Brave");
	ClapTrap	soldier2("Loser");
	std::cout << "****** ScavTrap construction *******" << std::endl;
	ScavTrap	der1("Different");
	ScavTrap	der2( der1 );
	ScavTrap	der3 = der1;
	std::cout << "****** FragTrap construction *******" << std::endl;
	FragTrap	f1("Happy");
	std::cout << "********* ClapTrap war ***********" << std::endl;
	soldier1.attack("Loser");
	soldier2.takeDamage(10);
	soldier1.takeDamage(5);
	soldier1.beRepaired(10);
	soldier2.beRepaired(10);
	std::cout << "********* ScavTrap war ***********" << std::endl;
	der1.attack("Another loser");
	der1.guardGate();
	der1.takeDamage(10);
	der2.takeDamage(20);
	der3.takeDamage(30);
	der1.beRepaired(5);
	std::cout << "********* FragTrap war ***********" << std::endl;
	f1.attack("Loser");
	f1.takeDamage(30);
	f1.highFivesGuys();
	return (0);
}