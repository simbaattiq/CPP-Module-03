
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap R1("[Robot1]");
    R1.whoAmI();
    R1.attack("{TARGET}");
    R1.takeDamage(75);
    R1.beRepaired(50);
    R1.guardGate();
    R1.highFivesGuys();

    // R1.takeDamage(75);
    // R1.highFivesGuys(); // he cant!!!
    return (0);

}