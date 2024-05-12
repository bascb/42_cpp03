/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:29:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 20:02:23 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	soldier1("Brave");
	ClapTrap	soldier2("Loser");

	soldier1.attack("Loser");
	soldier2.takeDamage(10);
	soldier1.takeDamage(5);
	soldier1.beRepaired(10);
	soldier2.beRepaired(10);
	for (int i = 0; i < 5; i++)
	{
		soldier1.beRepaired(10);
		soldier1.attack("Loser");
	}
	return (0);
}