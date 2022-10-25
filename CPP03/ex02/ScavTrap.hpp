
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
    public : 
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const &src);
            ~ScavTrap();

            ScavTrap&   operator=(ScavTrap const &rhs);

            void    attack(std::string const &target);
            void    guardGate();
};
#endif