#include <iostream>

int main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string 	*p_str = &str;
	std::string 	&r_str = str;

	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *p_str << std::endl;
	std::cout << "Reference: " << r_str << std::endl;
	return 0;
}
