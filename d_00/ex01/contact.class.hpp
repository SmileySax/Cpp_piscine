#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>


class	Contact{

public:

	Contact( void );
	~Contact( void );

	void	setFname(std::string str);
	void	setLname(std::string str);
	void	setNname(std::string str);
	void	setPnumber(std::string str);
	void	setDsecret(std::string str);
	void	setEmptyContact(void);
	void	getContact(void) const;
	std::string	getFname(void) const;
	std::string	getLname(void) const;
	std::string	getNname(void) const;

private:

	std::string	_fname;
	std::string	_lname;
	std::string	_nname;
	std::string	_pnumber;
	std::string	_dsecret;

};


#endif
