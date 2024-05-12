/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:16:13 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 19:54:23 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : Name("Unknown") , HitPoints(10) , EnergyPoints(10) , AttackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string Name ) : Name(Name) , HitPoints(10) , EnergyPoints(10) , AttackDamage(0)
{
	std::cout << "ClaptTrap constructor called to create " << Name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& src) : Name(src.Name) , HitPoints(src.HitPoints) , EnergyPoints(src.EnergyPoints) , AttackDamage(src.AttackDamage)
{
	std::cout << "ClapTrap Copy constructor called for " << src.Name << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& src)
{
	std::cout << "ClapTrap Copy assignment operator called for " << src.Name << std::endl;
	if (this != &src)
	{
		this->Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called for " << Name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!HitPoints)
	{
		std::cout << "ClapTrap " << Name << " cannot attack " << target <<  " because doesn't have Hit Points!" << std::endl;
		return;
	}
	if (EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target <<  ", causing  " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot attack " << target <<  " because doesn't have Energy Points!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!HitPoints)
	{
		std::cout << "ClapTrap " << Name << " can't take more damage!" << std::endl;
		return;
	}
	if (amount > HitPoints)
		HitPoints = 0;
	else
		HitPoints -= amount;
	std::cout << "ClapTrap " << Name << " took " << amount << " of damage and now has " << HitPoints << " Hit Points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " is repaired with " << amount <<  " Hit points" << std::endl;
		EnergyPoints--;
		HitPoints += amount;
		std::cout << "ClapTrap " << Name << " now has " << HitPoints <<  " Hit points and " << EnergyPoints << " Energy points" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired because doesn't have Energy Points!" << std::endl;
	}
}