
#include "ScavTrap.hpp"

int main(void)
{
    /* ScavTrap Code */
    ScavTrap P2("[ROBO_1]");
    P2.attack("(Enemy)");
    P2.takeDamage(6);
    P2.beRepaired(20);
    P2.guardGate();
    P2.takeDamage(113);
    P2.guardGate();
    P2.takeDamage(1);
    P2.guardGate(); // can't guard, no hit points aka dead

    /**/// testing func() overload resolution with attack();
    /**/// without a vitual keyword this calls the base ataack();
    // ClapTrap& ref(P2);
    // ClapTrap& ref = P2; // this is problamatic!!? not anymore
    // ClapTrap *ptr = new ScavTrap("BOYA");
    // ClapTrap *ptr = &P2;
    
    // ref.attack("TARGET");
    // ref.beRepaired(19);
    // ptr->takeDamage(20);
    // delete ptr;

    return (0);

}
