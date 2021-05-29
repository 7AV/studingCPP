
#include "Contact.hpp"

void 	ft_header( void )
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
}

void 	ft_search(Contact cont[8])
{
	std::string 	cmd;
	int 	cnt = 0;

	for (int i = 0; i < 7; i++) {
		if (cont[i].index) {
			cont[i].put_brief();
			cnt++;
		}
	}
	std::cout << "Enter index > ";
	std::getline(std::cin, cmd);
	if ((!cmd[1]) && (0 < stoi(cmd) && (stoi(cmd) <= cnt)))
		cont[stoi(cmd) - 1].put_full();
	else
		std::cout << "Invalid index." << std::endl;
}

int main()
{
	std::string cmd;
	int 		ind = 0;
	Contact		cont[8];

	while(true) {
		std::cout << "Enter command > ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			if (ind < 8) {
				cont[ind].insert_data(ind);
				ind++;
			}
			else
				std::cout << "PhoneBook is full." << std::endl;
		else if (cmd == "SEARCH")
			if (ind) {
				ft_header();
				ft_search(cont);
			}
			else
				std::cout << "No contacts yet." << std::endl;
		else if (cmd == "EXIT")
			exit (0);
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}
