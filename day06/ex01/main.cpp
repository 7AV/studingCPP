/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:48:54 by sbudding          #+#    #+#             */
/*   Updated: 2021/04/29 14:17:01 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

typedef struct				s_data
{
	std::string				*s1;
	int						num;
	std::string				*s2;
	
} __attribute__((packed))	t_data;

std::string		ft_str(int len)
{
	std::string		tmp;
	char			alph[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	tmp.reserve(len);
	for (int i = 0; i < len; ++i) 
		tmp += alph[std::rand() % (sizeof(alph) - 1)];
	return tmp;
}

void	*serialize(void)
{
	char	alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	t_data	*dst = new t_data;
	dst->s1 = new std::string;
	dst->s2 = new std::string;
	dst->num = std::rand() % 10 + 1;
	dst->s1->resize(dst->num);
	dst->s2->resize(dst->num);
	for (int i = 0; i < dst->num; i++)
	{
		(*dst->s1)[i] = alp[std::rand() % (sizeof(alp) - 1)];
		(*dst->s2)[i] = alp[std::rand() % (sizeof(alp) - 1)];
	}

	std::cout << std::endl << "+--- serialized (void) ---+" << std::endl;
	std::cout << "address: " << dst << std::endl;
	std::cout << "s1: " << *dst->s1 << std::endl;
	std::cout << "num: " << dst->num << std::endl;
	std::cout << "s2: " << *dst->s2 << std::endl;

	return reinterpret_cast<void*>(dst);
}

t_data	*deserialize(void *raw)
{
	return reinterpret_cast<t_data*>(raw);
}

int		main()
{
	t_data	*data;
	void	*raw;
	
	std::srand(time(NULL));
	raw = serialize();
	data = deserialize(raw);
	std::cout << std::endl << "+--- deserialized (t_data) ---+" << std::endl;
	std::cout << "address: " << data << std::endl;
	std::cout << "s1: " << *data->s1 << std::endl;
	std::cout << "num: " << data->num << std::endl;
	std::cout << "s2: " << *data->s2 << std::endl;

	return (0);
}