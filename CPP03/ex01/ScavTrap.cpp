#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
 {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;

	std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap( ScavTrap const &src ) 
{

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void ) 
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_HitPoints = rhs.getHitPoints();
		this->_EnergyPoints = rhs.getEnergyPoints();
		this->_AttackDamage = rhs.getAttackDamage();
	}
	return (*this);
}