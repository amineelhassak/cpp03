#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void )
{
	FragTrap fragTrap1 ("__FragTrap__I");
	FragTrap fragTrap2 (fragTrap1);
	FragTrap fragTrap3 = fragTrap2;
	fragTrap3.attack ("Target1");
	fragTrap2.takeDamage (15);
	fragTrap2.beRepaired (15);
	fragTrap3.beRepaired (50);
	fragTrap3.highFivesGuys( );
	return (0);
}