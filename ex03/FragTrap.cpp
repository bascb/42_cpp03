/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:27:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/13 19:14:05 by bcastelo         ###   ########.fr       */
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

FragTrap::FragTrap( std::string NewName ) : ClapTrap(NewName)
{
	std::cout << "FragTrap constructor called to create " << Name << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

 FragTrap::FragTrap( const FragTrap& src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called for " << src.Name << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& src)
{
	std::cout << "FragTrap Copy assignment operator called for " << src.Name << std::endl;
	if (this != &src)
	{
		this->Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called for " << Name << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << Name << " sends HighFives to everyone!" << std::endl;
}