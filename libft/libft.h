/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mour <fde-mour@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:21:18 by fde-mour          #+#    #+#             */
/*   Updated: 2023/05/09 19:14:34 by fde-mour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

int	ft_putnbr_base(int nbr, char *base);
int	ft_putnbr_u(unsigned int nbr, char *base);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_strlen(char *s);
int	ft_void(unsigned long int nbr);
int	ft_putnbr_hex(unsigned long int nbr, char *base);

#endif
