#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	int	i = 0;
	int	l;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	} else {
		while (i++ < ac - 1) {
			l = 0;
			while(av[i][l]) {
				std::cout << char(std::toupper(av[i][l++]));
			}
			if (i < ac - 1 && (av[i + 1] && av[i + 1][0] != ' ')
					&& av[i][l - 1] != ' '){
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
