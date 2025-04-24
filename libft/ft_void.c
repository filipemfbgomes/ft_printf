/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-22 15:50:10 by figomes           #+#    #+#             */
/*   Updated: 2025-04-22 15:50:10 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_void(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_putnbr_hex(nbr, "0123456789abcdef");
	return (count);
}
