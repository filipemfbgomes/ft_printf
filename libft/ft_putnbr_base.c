/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mour <fde-mour@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:18:18 by fde-mour          #+#    #+#             */
/*   Updated: 2023/05/09 16:50:26 by fde-mour         ###   ########.fr       */
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
	{
		count += ft_putnbr_base(n / basesize, base);
	}
	count += ft_putchar(base[n % basesize]);
	return (count);
}

/*int	main(void)
{
	ft_putnbr_base(0, "0123456789");
}*/