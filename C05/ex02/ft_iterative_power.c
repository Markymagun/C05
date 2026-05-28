/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 21:26:09 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/17 21:26:15 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
// int main(void)
// {
//     printf(" 3^5  = %d\n", ft_iterative_power(3, 5));
//     printf(" 5^0  = %d\n", ft_iterative_power(5, 0));
//     printf(" 5^-2 = %d\n", ft_iterative_power(5, -2));
//     printf(" 0^0  = %d\n", ft_iterative_power(0, 0));
//     printf(" 0^5  = %d\n", ft_iterative_power(0, 5));
//     printf("-2^3  = %d\n", ft_iterative_power(-2, 3));
//     return (0);
// }