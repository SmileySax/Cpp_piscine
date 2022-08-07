#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "contact.class.hpp"
#include <string>


class	Phonebook {

public:

	Phonebook( void );
	~Phonebook( void );

	void	add(void);
	void	search(void);

private:

	int			_n_of_contacts;
	Contact		_contact[8];

	Contact		*_empty_contact(void);
	// int		_check_field(char *field) const;
	//If the text is longer than the column, it must be truncated
	// and the last displayable character must be replaced by adot (’.’).
	std::string	_fill_info(std::string message);
};
#endif
