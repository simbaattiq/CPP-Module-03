

#include "FragTrap.hpp"

int main(void)
{
    // FragTrap code
    FragTrap F1("{ROBO}");
    F1.attack("[TARGET]");
    F1.takeDamage(1);
    F1.highFivesGuys();
    F1.beRepaired(90);
    F1.attack("[ENEMY]");
    F1.highFivesGuys();

    // F1.takeDamage(190);
    // F1.highFivesGuys();
    return (0);
}