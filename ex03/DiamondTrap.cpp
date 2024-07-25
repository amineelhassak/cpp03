#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void )   {
    this->name = "__defalut___clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap : "<< this->name << " Default constructor is called ." << std::endl; /*----*/
}

DiamondTrap::DiamondTrap (std::string _name)    {
    this->name = _name + "_clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
     std::cout << "DiamondTrap : " << this->name << " Default constructor is called ." << std::endl;  /*----*/}


DiamondTrap &DiamondTrap::operator = (const DiamondTrap & diamond)    {
    if (this != &diamond)   {
        this->Attack_damage = diamond.Attack_damage;
        this->Energy_points = diamond.Energy_points;
        std::cout << "DiamondTrap : " << this->name << " assignement operator is called" << std::endl ;    /*----*/}
    return (*this); /*----*/}

DiamondTrap::DiamondTrap (const DiamondTrap &diamond)    {
    std::cout << "DiamondTrap : " << this->name << " Copy constructor called" << std::endl;
    *this = diamond;    /*----*/}

void	DiamondTrap::whoAmI (void)   {
	std::cout << "DiamondTrap name is  : " << this->name << std::endl;
	std::cout << "ClapTrap name is :" << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(std::string &target)   {
    ScavTrap::attack(target);
    std::cout << "DiamondTrap : " << this->name << " Attack " << target << std::endl;   /*----*/
    }

DiamondTrap::~DiamondTrap ( void ) {
    std::cout << "DiamondTrap : " << this->name << "  is destroyed ." << std::endl;   /*----*/}