//
// Created by Shantay Budding on 4/12/21.
//

#include "Contact.hpp"

Contact::Contact( void ) {

	this->index = 0;
	this->_data[0] = "first name";
	this->_data[2] = "last name";
	this->_data[4] = "nickname";
	this->_data[6] = "login";
	this->_data[8] = "postal address";
	this->_data[10] = "email address";
	this->_data[12] = "phone number";
	this->_data[14] = "birthday date";
	this->_data[16] = "favorite meal";
	this->_data[18] = "underwear color";
	this->_data[20] = "darkest secret";

	return;
}

Contact::~Contact( void ) {

	return;
}

void Contact::insert_data( int ind ) {

	std::string 	buff;

	this->index = ind + 1;
	for (int i = 1; i < 22; i += 2) {
		std::cout << "Enter " << this->_data[i - 1] << ": ";
		std::getline(std::cin, this->_data[i]);
	}
}

void Contact::ft_format( std::string str )
{
	if (str.size() <= 10) {
		for (int i = 0; str.size() + i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	else {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	std::cout << "|";
}

void Contact::put_brief( void ) {

	std::cout << "|         " << this->index << "|";
	ft_format(this->_data[1]);
	ft_format(this->_data[3]);
	ft_format(this->_data[5]);
	std::cout << std::endl;
}

void Contact::put_full( void ) {

	for (int i = 0; i < 21; i += 2) {
		std::cout << this->_data[i] << ": " << this->_data[i + 1] << std::endl;
	}
}