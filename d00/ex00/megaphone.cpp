/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:02:29 by wvaara            #+#    #+#             */
/*   Updated: 2021/10/04 14:34:08 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

static void ft_megaphone(char **argv)
{
	int i = 1;
	int ii = 0;
	while (argv[i])
	{
		while (argv[i][ii])
		{
			std::cout << (char)toupper(argv[i][ii]);
			ii++;
		}
		ii = 0;
		i++;
		std::cout << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBREAKABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	ft_megaphone(argv);
	return (0);
}
