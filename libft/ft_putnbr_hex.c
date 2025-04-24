/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-22 15:49:47 by figomes           #+#    #+#             */
/*   Updated: 2025-04-22 15:49:47 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex(unsigned long int nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_hex(nbr / 16, base);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
