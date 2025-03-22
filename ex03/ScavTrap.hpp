

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    virtual ~ScavTrap( void );

    virtual void attack(const std::string& target);
    void guardGate( void );
};

#endif