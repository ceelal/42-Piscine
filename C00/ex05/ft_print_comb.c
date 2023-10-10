/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir <cecayir@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:59:50 by cecayir           #+#    #+#             */
/*   Updated: 2023/02/04 20:59:51 by cecayir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x1;
	char	x2;
	char	x3;

	x1 = '0' ;
	while (x1 <= '7' )
	{
		x2 = x1 + 1;
		while (x2 <= '8' )
		{
			x3 = x2 + 1;
			while (x3 <= '9' )
			{
				ft_putchar(x1);
				ft_putchar(x2);
				ft_putchar(x3);
				if (x1 != '7')
					write(1, ", ", 2);
				x3++;
			}
			x2++;
		}
		x1++;
	}
}
