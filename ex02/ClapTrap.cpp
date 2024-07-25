#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ) : name("default"), Hit_points(10), Energy_points(10), Attack_damage(0)  {
    std::cout << "ClapTrap : " << this->name << " default constructor is called ." << std::endl;   /*-----*/}

ClapTrap::ClapTrap (std::string name):name(name), Hit_points(10), Energy_points(10), Attack_damage(0)   {
    std::cout << "ClapTrap : " <<this->name << " parametrized constructor is called ." << std::endl; /*-----*/}


void ClapTrap::attack (const std::string& target)    {
    if (Energy_points > 0)  {
        Energy_points--;
        std::cout << "ClapTrap " << this->name <<  " attacks " << target << \
                " , causing " << Attack_damage << " points of damage!" << std::endl;   } /*-----*/  }

ClapTrap &ClapTrap::operator = (const ClapTrap &clap) {
    if (this != &clap)  {
        this->Hit_points = clap.Hit_points;
        this->Energy_points = clap.Energy_points;
        this->Attack_damage = clap.Attack_damage;   }
    return (*this); /*-----*/ }

ClapTrap::ClapTrap (const ClapTrap & clap)   {
    *this = clap;   }

void ClapTrap::takeDamage (unsigned int amount)  {
    if (this->Hit_points == 0 || this->Hit_points - amount < 0)
        std::cout << "already died !" << std::endl;
    else
        this->Hit_points -= amount;
         /*-----*/;}

void ClapTrap::beRepaired (unsigned int amount)  {
    if (this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "c'est pas possible de repaired" << std::endl;
    if (amount + Hit_points > 10)
        std::cout << "c'est pas possible d'ajaute" << std::endl;
    else
        (1) && (this->Hit_points += amount && this->Energy_points--);   /*-----*/}

ClapTrap::~ClapTrap( void )   {
    std::cout << "ClapTrap : " << this->name << " is destryed ." << std::endl;    /*-----*/ }