#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void )  {
     std::cout << "DiamondTrap : "<< this->name << " Default constructor is called ." << std::endl; /*----*/}

DiamondTrap::DiamondTrap (std::string name) : name(name) {
     std::cout << "DiamondTrap : " << this->name << " Default constructor is called ." << std::endl;  /*----*/}

DiamondTrap::~DiamondTrap ( void ) {
    std::cout << "DiamondTrap : "<< this->name << "  is destroyed ." << std::endl;   /*----*/}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap & diamond)    {
    if (this != &diamond)   {
        this->Attack_damage = diamond.Attack_damage;
        this->Energy_points = diamond.Energy_points;
        std::cout << "DiamondTrap "<< this->name << " assignement operator is called" << std::endl ;    /*----*/}
    return (*this); /*----*/}

DiamondTrap::DiamondTrap (const DiamondTrap &diamond)    {
    std::cout << "DiamondTrap :" << this->name << " Copy constructor called" << std::endl;
    *this = diamond;    /*----*/}