/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-22 15:46:36 by figomes           #+#    #+#             */
/*   Updated: 2025-04-22 15:46:36 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list(args))
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_void(va_arg(args, unsigned long)));
	else if (format == 'd' | format == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (format == 'u')
		return (ft_putnbr_u(va_arg(args, int), "0123456789"));
	else if (format == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar(format));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	if (str == 0)
		return (-1);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			count += ft_format(*str, args);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	if (count < 0)
		return (-1);
	return (count);
}

/*int	main(void)
{
	//fclose(stdout);
	fprintf(stderr, "%d\n", ft_printf("Boas trallalero trallala"));
	fprintf(stderr, "%d\n", printf("Boas trallalero trallala"));
	return (0);
}*/