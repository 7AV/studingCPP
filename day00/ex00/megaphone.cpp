#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int y = 1; argv[y]; y++)
			for (int x = 0; x < strlen(argv[y]); x++)
				std::cout << (char)toupper(argv[y][x]);
	std::cout << std::endl;
	return 0;
}
