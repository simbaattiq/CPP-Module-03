

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
Name("DEFAULT"),
HitPoints(10),
EnergyPoint(10),
AttackDamage(0)
{
    std::cout << "ClapTrap: Default Constructor 1 for " << Name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
Name(name),
HitPoints(10),
EnergyPoint(10),
AttackDamage(0)
{
    std::cout << "ClapTrap: Default Constructor 2 for " << Name << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap: Destructor called for " << Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
Name(other.Name),
HitPoints(other.HitPoints),
EnergyPoint(other.EnergyPoint),
AttackDamage(other.AttackDamage)
{
    std::cout << "ClapTrap: Copy Constructor for " << Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
    }
    std::cout << "ClapTrap: Assignement Operator Called " << std::endl;
    return (*this);   
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
        std::cout << "ClapTrap: " << Name << " Can't Attack, He's Already dead, 0 Hit points\n";
    else if (EnergyPoint == 0)
        std::cout << "ClapTrap: " << Name << " Can't Attack, Has 0 Energy points\n";
    else
    {
        EnergyPoint--;
        std::cout << "ClapTrap: " << Name << " Attacks ";
        std::cout << target << ", causing " << AttackDamage << " damage";
        std::cout << " points of damage" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints == 0)
    {
        std::cout << "ClapTrap: " << Name << " Already Dead: Has no Hit points\n";
    }
    else if (HitPoints > amount)
    {
        HitPoints -= amount;
        std::cout << "ClapTrap: ";
        std::cout << Name << " Took a Damage of " << amount;
        std::cout << " points, Current Hit points " << HitPoints << std::endl;
    }
    else if (HitPoints <= amount)
    {
        HitPoints = 0;
        std::cout << "ClapTrap: " << Name << " Took Too Much Damage and Died ";
        std::cout << HitPoints << " Hit points left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoint == 0)
    {
        std::cout << "ClapTrap: ";
        std::cout << Name << " Cant be repaired, No Energy points left\n";
    }
    else if (HitPoints == 0)
    {
        std::cout << "ClapTrap: ";
        std::cout << Name << " Cant be repaired! He's Already dead, 0 Hit points\n";
    }
    else
    {
        EnergyPoint--;
        HitPoints += amount;
        std::cout << "ClapTrap: " << Name << " Repaired Successfully!";
        std::cout << " Current Hit points " << HitPoints << std::endl;
    }
}