/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:27:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/04 21:44:28 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap(Name)
{
	std::cout << "FragTrap constructor called to create " << Name << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called for " << Name << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << Name << " sends HighFives to everyone!" << std::endl;
}