/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:01:49 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/03 22:59:51 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap(Name)
{
	std::cout << "ScavTrap constructor called to create " << Name << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called for " << Name << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!HitPoints)
	{
		std::cout << "ScavTrap " << Name << " cannot attack " << target <<  " because don't have Hit Points!" << std::endl;
		return;
	}
	if (EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target <<  ", causing  " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " cannot attack " << target <<  " because don't have Energy Points!" << std::endl;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}