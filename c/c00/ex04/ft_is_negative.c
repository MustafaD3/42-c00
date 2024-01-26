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

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, &"N", 1);
	else
		write(1, &"P", 1);
}

int	main(void)
{
	ft_is_negative(-1);
}
