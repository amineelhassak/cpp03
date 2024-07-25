#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap scavTrap1("__ScavTrap__I");
	ScavTrap scavTrap2(scavTrap1);
	ScavTrap scavTrap3 = scavTrap2;
	scavTrap1.attack("Target1");
	scavTrap2.takeDamage(15);
	scavTrap2.beRepaired(15);
	scavTrap3.beRepaired(50);
	scavTrap1.guardGate();
	return (0);
}