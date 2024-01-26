/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/mm/dd 10:03:12 by mdalkili          #+#    #+#             */
/*   Updated: 2024/mm/dd 10:20:30 by mdalkili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int allow_repetition);

void	ft_print_seperate(char i, char j, char z);

void	ft_putchar(char *c, int length);

char	ft_allow_repetition(char c, int allow_repetition);

int	ft_are_strings_equal(char *str1, char *str2);

int	ft_are_strings_equal(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 == '\0' && *str2 == '\0');
}

char	ft_allow_repetition(char c, int allow_repetition)
{
	if (allow_repetition == 1)
	{
		return ('9');
	}
	return (c);
}

void	ft_putchar(char *c, int length)
{
	write(1, c, length);
}

void	ft_print_seperate(char i, char j, char z)
{
	if (!(i == '7' && j == '8' && z == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(int allow_repetition)
{
	char	i;
	char	j;
	char	z;

	i = '0';
	while (i <= ft_allow_repetition('7', allow_repetition))
	{
		j = i + 1;
		while (j <= ft_allow_repetition('8', allow_repetition))
		{
			z = j + 1;
			while (z <= ft_allow_repetition('9', allow_repetition))
			{
				ft_putchar(&i, 1);
				ft_putchar(&j, 1);
				ft_putchar(&z, 1);
				ft_print_seperate(i, j, z);
				z++;
			}
			j++;
		}
		i++;
	}
	ft_putchar("\0", 2);
}

int	main(int argc, char *args[])
{
	if (argc == 2)
	{
		if (ft_are_strings_equal(args[1], "-evet"))
			ft_print_comb(1);
		else
			ft_print_comb(0);
	}
	else
		ft_print_comb(0);
	return (0);
}
