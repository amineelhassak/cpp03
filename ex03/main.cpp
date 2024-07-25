#include "DiamondTrap.hpp"

int main()
{
        DiamondTrap diamondtrap2("Shiny");
        std::string str = "Target";
        diamondtrap2.attack(str);
        diamondtrap2.takeDamage(30);
        diamondtrap2.beRepaired(40);

        diamondtrap2.guardGate();

        diamondtrap2.highFivesGuys();

        diamondtrap2.whoAmI();

        // ClapTrap *polymorphic_trap = &diamondtrap2;
        // polymorphic_trap->attack("polymorphic target");

        // diamondtrap2.ClapTrap::attack("direct ClapTrap call");
}