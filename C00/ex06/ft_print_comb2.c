/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir <cecayir@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:00:04 by cecayir           #+#    #+#             */
/*   Updated: 2023/02/04 21:00:05 by cecayir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	sayi1;
	int	sayi2;

	sayi1 = 0;
	sayi2 = 0;
	while (sayi1 <= 99)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 99)
		{	
			ft_putchar(sayi1 / 10 + 48);
			ft_putchar(sayi1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(sayi2 / 10 + 48);
			ft_putchar(sayi2 % 10 + 48);
			sayi2++;
			if (sayi1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	sayi1++;
	}
}
