/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir <cecayir@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:55:51 by cecayir           #+#    #+#             */
/*   Updated: 2023/02/20 10:12:54 by cecayir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	d;

	c = 1;
	d = 0;
	if (ac > 1)
	{
		while (c < ac)
		{
			d = 0;
			while (av[c][d])
			{
				write(1, &av[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
