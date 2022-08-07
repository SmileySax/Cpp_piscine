#include "phonebook.class.hpp"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

Phonebook::Phonebook(void): _n_of_contacts (0) {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

void	Phonebook::add(void) {
	Contact	*contact (this->_empty_contact());

	contact->setFname(this->_fill_info("Enter first name: "));
	contact->setLname(this->_fill_info("Enter last name: "));
	contact->setNname(this->_fill_info("Enter nickname: "));
	contact->setPnumber(this->_fill_info("Enter phone number: "));
	contact->setDsecret(this->_fill_info("Enter dirty secret: "));
	this->_n_of_contacts++;
}

void	Phonebook::search(void) {
	int	i (0);
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
	std::cout << std::setfill(' ') << std::right;
	std::cout << '|' << std::setw(10) << "index";
	std::cout << '|' << std::setw(10) << "first name";
	std::cout << '|' << std::setw(10) << "last name";
	std::cout << '|' << std::setw(10) << "nickname";
	std::cout << '|' << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
	while (i < std::min(this->_n_of_contacts, 8)) {
		std::cout << std::setfill(' ');
		std::cout << '|' << std::setw(10) << i;
		std::cout << '|' << std::setw(10) << this->_contact[i].getFname();
		std::cout << '|' << std::setw(10) << this->_contact[i].getLname();
		std::cout << '|' << std::setw(10) << this->_contact[i].getNname();
		std::cout << '|' << std::endl;
		std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	std::cin >> i;//пойманный ентер переходит в следующий cin; глюки при неправильном индексе (буква)
	if (i < std::min(this->_n_of_contacts, 8)) {
		this->_contact[i].getContact();
	} else {
		std::cout << "no such contact" << std::endl;
	}
}

std::string	Phonebook::_fill_info(std::string message){
	std::string tmp;

	do {
		std::cout << message << std::endl;
		getline(std::cin, tmp);
	} while (0);//_check_field(tmp));
	return tmp;
}

Contact	*Phonebook::_empty_contact(void) {
	const int	current (this->_n_of_contacts % 8);

	if (this->_n_of_contacts >= 8) {
		this->_contact[current].setFname("");
		this->_contact[current].setLname("");
		this->_contact[current].setNname("");
		this->_contact[current].setPnumber("");
		this->_contact[current].setDsecret("");
	}
	return (&(this->_contact[this->_n_of_contacts % 8]));
}

// int		Phonebook::_check_field(char *field) const {
// 	if (field && *field) {
// 		return (0);
// 	}
// 	return (1);
// }
