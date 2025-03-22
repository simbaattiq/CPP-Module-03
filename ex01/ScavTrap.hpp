

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& other);
    virtual ~ScavTrap( void );
    ScavTrap& operator=(const ScavTrap& other);

    virtual void attack(const std::string& target);
    void guardGate( void );
};

#endif