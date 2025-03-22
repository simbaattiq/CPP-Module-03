

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

    FragTrap( void );
    FragTrap (const std::string& name);
    FragTrap (const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    virtual ~FragTrap( void );


    virtual void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif