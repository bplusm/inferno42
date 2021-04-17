/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhenriq <brhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:17:15 by brhenriq          #+#    #+#             */
/*   Updated: 2021/04/16 22:20:38 by brhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while(power != 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
