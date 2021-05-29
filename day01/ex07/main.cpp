#include <iostream>
#include <fstream>
#include <string>

int		ft_replace(std::string text, std::string s1, std::string s2)
{
	std::ifstream 	ifs(text);
	std::string 	line;

	if ((s1.size() == 0) || (s2.size() == 0))
	{
		std::cout << "Empty argument." << std::endl;
		return (1);
	}
	if (!ifs.is_open())
	{
		std::cout << "Invalid input file." << std::endl;
		return (1);
	}
	std::ofstream	ofs(text + ".replace");
	if (!ofs.is_open())
	{
		std::cout << "Invalid output file." << std::endl;
		return (1);
	}
	while (std::getline(ifs, line))
	{
		while(line.find(s1) != std::string::npos)
			line.replace(line.find(s1), s1.length(), s2);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_replace(argv[1], argv[2], argv[3]))
			return (1);
	}
	else
		std::cout << "Wrong number of arguments." << std::endl;
	return 0;
}
