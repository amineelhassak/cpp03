#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap clapTrapDefault;
    ClapTrap clapTrapParam("ParameterizedClapTrap");
    
    // Create FragTrap instances
    FragTrap fragTrapDefault;
    FragTrap fragTrapParam("ParameterizedFragTrap");

    // Create ScavTrap instances
    ScavTrap scavTrapDefault;
    ScavTrap scavTrapParam("ParameterizedScavTrap");

    // Test attacks
	clapTrapDefault.attack("Enemy1");
    clapTrapParam.attack("Enemy2");
    fragTrapDefault.attack("Enemy3");
    fragTrapParam.attack("Enemy4");
    scavTrapDefault.attack("Enemy5");
    scavTrapParam.attack("Enemy6");

    // Test high fives
    fragTrapDefault.highFivesGuys();
    fragTrapParam.highFivesGuys();

    // Test guarding gate
    scavTrapDefault.guardGate();
    scavTrapParam.guardGate();

    // Test take damage and repair
    clapTrapDefault.takeDamage(5);
    clapTrapDefault.beRepaired(2);

    fragTrapParam.takeDamage(40);
    fragTrapParam.beRepaired(30);

    scavTrapDefault.takeDamage(15);
    scavTrapDefault.beRepaired(10);

    return 0;
}