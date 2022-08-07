#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class	Zombie {

public:

	Zombie() {}
//	Zombie( std::string name );
	~Zombie( void );

	void	init( std::string name );
	void	announce( void );

private:

	std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
