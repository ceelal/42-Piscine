/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir <cecayir@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:33:24 by cecayir           #+#    #+#             */
/*   Updated: 2023/02/13 23:36:11 by cecayir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	control(char c)
{
	if (!(c < '0' || c > 'z'))
		if (!(c > '9' && c < 'A'))
			if (!(c > 'Z' && c < 'a'))
				return (1);
	return (0);
}

char	big_write(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	small_write(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (control(str[index]) == 1)
		{
			str[index] = big_write(str[index]);
			index++;
			while (control(str[index]) == 1)
			{
				str[index] = small_write(str[index]);
				index++;
			}
		}
		index++;
	}
	return (str);
}
