/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-22 15:49:40 by figomes           #+#    #+#             */
/*   Updated: 2025-04-22 15:49:40 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	basesize;
	unsigned int	n;
	int				count;

	count = 0;
	basesize = ft_strlen(base);
	if (nbr < 0)
	{
		n = -nbr;
		count += ft_putchar('-');
	}
	else
		n = nbr;
	if (n >= basesize)
		count += ft_putnbr_base(n / basesize, base);
	count += ft_putchar(base[n % basesize]);
	return (count);
}

/*int	main(void)
{
	ft_putnbr_base(0, "0123456789");
}*/