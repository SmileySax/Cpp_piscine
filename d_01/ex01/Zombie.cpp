#include "Zombie.hpp"
#include<iostream>

// Zombie::Zombie() {}


// Zombie::Zombie( std::string name ): _name (name) {
// 	return ;
// }

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " destructed" << std::endl;
}

void	Zombie::init( std::string name ) {
	this->_name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
