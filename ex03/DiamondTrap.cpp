

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : 
ClapTrap(),
ScavTrap(),
FragTrap(),
Name("Default")
{
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap: Default Constructor 1 for " << this->Name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : 
ClapTrap(name + "_clap_name"),
ScavTrap(name),
FragTrap(name),
Name(name)
{
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;

    std::cout << "DiamondTrap: Default Constructor 2 for " << this->Name << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap: ";
    // std::cout << "Default Destructor for: " << DiamondTrap::Name << std::endl;
    std::cout << "Default Destructor called for " << Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
ClapTrap(other),
ScavTrap(other),
FragTrap(other),
Name(other.Name)
{
    std::cout << "DiamondTrap: Copy Constructor for " << this->Name << std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        Name = other.Name;
    }
    std::cout << "DiamondTrap: Assignement operator for: ";
    std::cout << Name << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "DiamonTrap: my name is: " << Name ;
    std::cout << ", And my ClapTrap parent name is: " << ClapTrap::Name;
    std::cout << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}