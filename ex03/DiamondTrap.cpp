/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:45:10 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/13 21:49:04 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Unknown_clap_name") , Name("Unknown")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	EnergyPoints = 50;
}

DiamondTrap::DiamondTrap( std::string NewName ) : ClapTrap(NewName + "_clap_name") , Name(NewName)
{
	std::cout << "DiamondTrap constructor called to create " << NewName << std::endl;
	EnergyPoints = 50;
}

DiamondTrap::DiamondTrap( const DiamondTrap& src) : ClapTrap(src) , ScavTrap(src) , FragTrap(src) , Name(src.Name) 
{
	std::cout << "DiamondTrap Copy constructor called for " << src.Name << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& src)
{
	std::cout << "DiamondTrap Copy assignment operator called for " << src.Name << std::endl;
	if (this != &src)
	{
		Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called for " << Name << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap Name is:" << Name << " and " << ClapTrap::Name << std::endl;
}

void	DiamondTrap::getData( void )
{
	std::cout << "DiamondTrap HitPoints: " << HitPoints << " EnergyPoints: " << EnergyPoints << " AtttackDamage: " << AttackDamage << std::endl;
}