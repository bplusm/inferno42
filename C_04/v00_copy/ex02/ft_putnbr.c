/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhenriq <brhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:11:14 by brhenriq          #+#    #+#             */
/*   Updated: 2021/04/16 19:34:23 by brhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > -2147483648 ) {
        if (nb < 0) {
            nb = -nb;
            ft_putchar(45);
        }
        if (nb > 9) {
            ft_putnbr(nb / 10);
            ft_putnbr(nb % 10);
        }
        if (nb <= 9 && nb >= 0)
            ft_putchar(nb + 48);
    } else if (nb == -2147483648)
        write(1, "-2147483648", 11);
}
