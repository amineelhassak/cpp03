#include "DiamondTrap.hpp"

int main()
{
        // Additional tests for DiamondTrap to check inheritance
        // Calling ClapTrap methods via DiamondTrap
        DiamondTrap diamondtrap2("Shiny");
        diamondtrap2.attack("target5");
        diamondtrap2.takeDamage(50);
        diamondtrap2.beRepaired(40);

        // Check the use of ScavTrap's method from DiamondTrap
        diamondtrap2.guardGate();

        // Check the use of FragTrap's method from DiamondTrap
        diamondtrap2.highFivesGuys();

        // Check diamondtrap specific method
        diamondtrap2.whoAmI();

        // Polymorphism test
        ClapTrap *polymorphic_trap = &diamondtrap2;
        polymorphic_trap->attack("polymorphic target");

        // Calling base class methods directly through DiamondTrap object
        diamondtrap2.ClapTrap::attack("direct ClapTrap call");
}