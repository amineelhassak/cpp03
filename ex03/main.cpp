#include "DiamondTrap.hpp"

int main( void )
{
        DiamondTrap diamondtrap;

        DiamondTrap diamondtrap2("Shiny");

        std::string str = "Target";

        diamondtrap2.attack(str);

        diamondtrap2.takeDamage(30);
        
        diamondtrap2.beRepaired(40);

        diamondtrap2.guardGate();

        diamondtrap2.highFivesGuys();

        diamondtrap2.whoAmI();
}