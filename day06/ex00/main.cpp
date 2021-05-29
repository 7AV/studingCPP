/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:48:54 by sbudding          #+#    #+#             */
/*   Updated: 2021/04/28 14:20:50 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int		ft_char(std::string arg)
{
	if (arg.length() == 1 && isalpha(arg[0]))
		return (1);
	return (0);
}

int		ft_int(std::string arg)
{
	size_t	idx;

	try {
		std::stoi(arg, &idx);
		if (arg.length() != idx)
			return (0);
	}
	catch (std::invalid_argument &e) {return (0);}
	return (1);
}

int		ft_float(std::string arg)
{
	size_t	idx;

	try {
		if ((arg.back() != 'f') ||
			(arg.find('.') == std::string::npos &&
			arg.find("inff") == std::string::npos &&
			arg.find("nanf") == std::string::npos))
			return (0);
		arg.pop_back();
		std::stof(arg, &idx);
		if (arg.length() != idx)
			return (0);
	}
	catch (std::invalid_argument &e) {return (0);}
	return (1);
}

int		ft_double(std::string arg)
{
	size_t	idx;

	try {
		if (arg.find('.') == std::string::npos &&
			arg.find("inf") == std::string::npos &&
			arg.find("nan") == std::string::npos)
			return (0);
		std::stod(arg, &idx);
		if (arg.length() != idx)
			return (0);
	}
	catch (std::invalid_argument &e) {return (0);}
	return (1);
}

void	ft_char_conv(std::string arg)
{
	!std::isprint(arg[0]) ?
	std::cout << "char: Non displayable" << std::endl :
	std::cout << "char: '" << arg[0] << "'" << std::endl;
	
	std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(arg[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(arg[0]) << std::endl;
	exit(EXIT_SUCCESS);
}

void	ft_int_conv(std::string arg) throw (std::out_of_range)
{
	int		num = std::stoi(arg);

	(num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max()) ?
	std::cout << "char: impossible" << std::endl :
	(!std::isprint(num)) ?
	std::cout << "char: Non displayable" << std::endl :
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;

	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
	exit(EXIT_SUCCESS);
}

void	ft_float_conv(std::string arg) throw (std::out_of_range)
{
	arg.pop_back();
	float	num = std::stof(arg);

	(std::isnan(num) || num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max()) ?
	std::cout << "char: impossible" << std::endl :
	(!std::isprint(static_cast<int>(num))) ?
	std::cout << "char: Non displayable" << std::endl :
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;

	(std::isnan(num) || num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) ?
	std::cout << "int: impossible" << std::endl :
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	
	std::cout << "float: " << num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
	exit(EXIT_SUCCESS);
}

void	ft_double_conv(std::string arg) throw (std::out_of_range)
{
	double		num = std::stod(arg);

	(std::isnan(num) || num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max()) ?
	std::cout << "char: impossible" << std::endl :
	(!std::isprint(static_cast<int>(num))) ?
	std::cout << "char: Non displayable" << std::endl :
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	
	(std::isnan(num) || num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) ?
	std::cout << "int: impossible" << std::endl :
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	
	(!std::isnan(num) && !std::isinf(num) && (num < std::numeric_limits<float>::min() || num > std::numeric_limits<float>::max())) ?
	std::cout << "float: impossible" << std::endl :
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
	exit(EXIT_SUCCESS);
}

void	ft_alarm() {std::cout<<"error: invalid argument"<<std::endl;exit(1);}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		ft_alarm();
	std::cout << std::fixed << std::setprecision(1);
	try {
		if (ft_char(argv[1]))
			ft_char_conv(argv[1]);
		if (ft_int(argv[1]))
			ft_int_conv(argv[1]);
		if (ft_float(argv[1]))
			ft_float_conv(argv[1]);
		if (ft_double(argv[1]))
			ft_double_conv(argv[1]);
		std::cout << "error: invalid argument" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::string roflan[] = {"char", "int", "float", "double"};
		for (int i = 0; i < 4; i++)
			std::cout << roflan[i] << ": impossible" << std::endl;
	}
	return (0);
}