

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    HitPoints = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "FragTrap: Default Constructor 1 for " << Name << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "FragTrap: Default Constructor 2 for " << Name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap (other)
{
    std::cout << "FragTrap: Copy Constructor for " << Name << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap: Destructor called for " << Name << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& other )
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap: Assignement Operator for " << Name << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys( void )
{
    if (EnergyPoint == 0)
        std::cout << "FragTrap: " << Name << " Can't High Five, 0 Energy left\n";
    else if (HitPoints == 0)
        std::cout << "FragTrap: " << Name << " Can't High Five, Already Dead, 0 Hit points left\n";
    else
    {
        std::cout << "FragTrap: ";
        std::cout << Name << " Let's GOOO!!! We Deserved this High Five ✋\n";
    }
}

void FragTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
        std::cout << "FragTrap: " << Name << " Can't Attack, He's Already dead, 0 Hit points\n";
    else if (EnergyPoint == 0)
        std::cout << "FragTrap: " << Name << " Can't Attack, Has 0 Energy points\n";
    else
    {
        EnergyPoint--;
        std::cout << "FragTrap: ";
        std::cout << Name << " Attacked " << target;
        std::cout << " With a Crushing Blow, Causing " << AttackDamage;
        std::cout << " Damage points"  << std::endl;
    }
}