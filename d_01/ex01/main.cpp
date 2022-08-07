#include "Zombie.hpp"
#include<iostream>

int	main( void ) {

	Zombie	*zombie;

	int	N = 5;
	zombie = zombieHorde(N, "goggie");
	for (int i = 0; i < N; i++) {
		(zombie + i)->announce();
	}
	delete [] zombie;
	return 0;
}
