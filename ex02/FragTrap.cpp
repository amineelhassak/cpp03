#include "FragTrap.hpp"

FragTrap::FragTrap ( void )  {
    std::cout << "FragTrap : " << this->name << " Default constructor is called ." << std::endl;
    this->name = "Default";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;   /*----*/    }

FragTrap::FragTrap (std::string name)    {
    this->name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;   /*----*/    }

FragTrap::FragTrap (const FragTrap & clap)   {
    *this = clap;   /*----*/                }

FragTrap &FragTrap::operator = (const FragTrap & clap)    {
        if (this != &clap)                                                                          {
        this->Hit_points = clap.Hit_points;
        this->Energy_points = clap.Energy_points;
        this->Attack_damage = clap.Attack_damage;
        std::cout << "FragTrap " << this->name << " assignement operator is called ." << std::endl;    }
    return (*this);     /*----*/   }

FragTrap::~FragTrap ( void ) {
    std::cout << "FragTrap : " << this->name << " is destroyed ." << std::endl;  /*----*/    }

void FragTrap::highFivesGuys (void)  {
    std::cout << this->name << " is asking for a high five! ✋" << std::endl;   /*----*/    }