/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir <cecayir@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:27:49 by cecayir           #+#    #+#             */
/*   Updated: 2023/02/19 13:27:52 by cecayir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac > 0)
	{
		while (av[0][c])
		{
			write(1, &av[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}