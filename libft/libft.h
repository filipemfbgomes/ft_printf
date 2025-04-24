/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-22 15:50:15 by figomes           #+#    #+#             */
/*   Updated: 2025-04-22 15:50:15 by figomes          ###   ########.fr       */
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
