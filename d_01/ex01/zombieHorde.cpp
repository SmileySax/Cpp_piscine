#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie	*horde = new Zombie[N];

	while (N-- > 0) {
		horde[N].init(name);
	}
//	std::cout << "here" << std::endl;
//	*horde = Zombie(name);
	return (horde);
}
