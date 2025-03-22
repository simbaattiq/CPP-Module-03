/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:56:29 by mel-atti          #+#    #+#             */
/*   Updated: 2025/03/10 16:59:16 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>
#include <string>



class ClapTrap
{
protected:
	std::string 			Name;
	unsigned int			HitPoints;
	unsigned int			EnergyPoint;
	unsigned int			AttackDamage;

public:
	ClapTrap( void );
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap& other);
	virtual ~ClapTrap( void );

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif