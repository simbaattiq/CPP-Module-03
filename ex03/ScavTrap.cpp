

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    HitPoints = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap: Default Constructor 1 called for " << Name << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap: Default Constructor 2 called for " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap: Copy Constructor called for " << this->Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap: Assignement called for " << Name << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap: Destructor called for " << Name << std::endl;
}

void ScavTrap::guardGate( void )
{
    if (EnergyPoint == 0)
        std::cout << "ScavTrap: " << Name << " Can't Activate Gate Keeper Mode, 0 Energy points\n";
    else if (HitPoints == 0)
        std::cout << "ScavTrap: " << Name << " Can't Activate Gate Keeper Mode, Already Dead, 0 Hit points\n";
    else
        std::cout << "ScavTrap: " << Name << " Is Now in Gate Keeper Mode 🛡\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
        std::cout << "ScavTrap: " << Name << " Can't Attack, He's Already dead, 0 Hit points\n";
    else if (EnergyPoint == 0)
        std::cout << "ScavTrap: " << Name << " Can't Attack, Has 0 Energy points\n";
    else if (EnergyPoint > 0)
    {
        EnergyPoint--;
        std::cout << "ScavTrap: " << Name << " Attack " << target;
        std::cout << " With a Mighty Blow, causing " << AttackDamage << " points of damage\n";
    }
}