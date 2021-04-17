/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhenriq <brhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:53:50 by brhenriq          #+#    #+#             */
/*   Updated: 2021/04/17 00:43:55 by brhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0) // ver se é menor que 1 ou menor que 2
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
