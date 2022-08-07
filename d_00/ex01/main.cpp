#include "phonebook.class.hpp"
#include <string>
#include <iostream>

int	main(void) {
	Phonebook	phonebook1;
	std::string	cmd ("");

	while (cmd.compare("EXIT")) {
		std::cout << "ADD / SEARCH / EXIT" << std::endl;
		getline(std::cin, cmd);
		if (!cmd.compare("ADD")) {
			phonebook1.add();
		}
		else if (!cmd.compare("SEARCH")) {
			phonebook1.search();
		}
	}
	return 0;
}
