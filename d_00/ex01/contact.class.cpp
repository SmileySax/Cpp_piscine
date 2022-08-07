#include "contact.class.hpp"
#include <iostream>
#include <cctype>
#include <string>

Contact::Contact( void ) {
	this->setEmptyContact();
	return ;
}

Contact::~Contact( void ) {
	return ;
}

void	Contact::setFname(std::string str) {
	this->_fname = str;
	return ;
}

void	Contact::setLname(std::string str) {
	this->_lname = str;
	return ;
}

void	Contact::setNname(std::string str) {
	this->_nname = str;
	return ;
}

void	Contact::setPnumber(std::string str) {
//	char	*ptr;

	this->_pnumber = str;
	// ptr = this->_pnumber;
	// while (ptr && *ptr) {
	// 	if (std::isdigit(*ptr)) {
	// 		*ptr = '-';
	// 	}
	// 	ptr++;
	// }
	return ;
}

void	Contact::setDsecret(std::string str) {
	this->_dsecret = str;
	return ;
}

void	Contact::getContact(void) const {
	std::cout << "First name: " << this->_fname << std::endl;
	std::cout << "Last name: " << this->_lname << std::endl;
	std::cout << "Nickname: " << this->_nname << std::endl;
	std::cout << "Phone number: " << this->_pnumber << std::endl;
	std::cout << "Dirty secret: " << this->_dsecret << std::endl;
	return ;
}

std::string	Contact::getFname(void) const {
	return this->_fname;
}

std::string	Contact::getLname(void) const {
	return this->_lname;
}

std::string	Contact::getNname(void) const {
	return this->_nname;
}

void	Contact::setEmptyContact(void) {
	this->setFname("");
	this->setLname("");
	this->setNname("");
	this->setPnumber("");
	this->setDsecret("");
	return ;
}
