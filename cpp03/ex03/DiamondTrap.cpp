# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str)
{
    (void)str;
    this->name = (str + "_Diamond_Trap");
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "Name : " << this->name << std::endl;
    std::cout << "HitPoint : " << this->HitPoints << std::endl;
    std::cout << "EnergyPoints : " << this->EnergyPoints << std::endl;
    std::cout << "AttackDamage : " << this->AttackDamage << std::endl;
    // std::cout << "Frag AttackDamage : " << ScavTrap::EnergyPoints << std::endl;
}