#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void )  {
    this->name = "Default";
    std::cout << "ScavTrap : " << this->name << " Default constructor is called ." << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;   /*----*/    }

ScavTrap::ScavTrap (std::string name)    {
    this->name = name;
    std::cout << "ScavTrap : " << this->name << " parametrized constructor is called ." << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;   /*----*/    }

ScavTrap::ScavTrap (const ScavTrap & clap)   {
    *this = clap;
    std::cout << "ScavTrap : " << this->name << " copy assignement operator is called ." << std::endl;   /*----*/    }

ScavTrap &ScavTrap::operator = (const ScavTrap & clap)    {
    if (this != &clap)  {
        this->name = clap.name;
        this->Hit_points = clap.Hit_points;
        this->Energy_points = clap.Energy_points;
        this->Attack_damage = clap.Attack_damage;
        std::cout << "ScavTrap : " << this->name << " assignement operator is called" << std::endl;    }
    return (*this); /*----*/    }


void ScavTrap::guardGate ( void )  {
    std::cout << "ScavTrap : " << this->name << "  is now in Gate keeper mode" << std::endl;    /*----*/    }

ScavTrap::~ScavTrap ( void )   {
    std::cout << "ScavTrap : " << this->name << " is destroyed." << std::endl;  /*----*/    }