

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap P1("[Palyer 1]");
    P1.attack("[Enemy]");
    P1.takeDamage(3);
    P1.beRepaired(80);

    ClapTrap R2("{Player 2}");
    R2.attack("[TARGET]");
    R2.takeDamage(11);
    R2.beRepaired(100);
    return (0);
}
