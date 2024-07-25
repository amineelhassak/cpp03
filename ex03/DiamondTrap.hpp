#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public  ScavTrap, public FragTrap {
    private:
        std::string name;
    public:
        DiamondTrap ( void );
        DiamondTrap (std::string);
        DiamondTrap (const DiamondTrap &);
        DiamondTrap &operator = (const DiamondTrap &);
        void    whoAmI ( void );
        void    attack ( std::string &target);
        ~DiamondTrap ( void );
};
#endif