#include "Zombie.hpp"
#include<iostream>

int	main( void ) {

	Zombie	*zombie;

	zombie = newZombie("heap");
	zombie->announce();
	randomChump("stack");
	delete zombie;
	return 0;
}
