/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:52:51 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/18 17:10:34 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

// int main(void)
// {
//     printf("nb = -10 : %d\n", ft_find_next_prime(-10));
//     printf("nb = 0   : %d\n", ft_find_next_prime(0));
//     printf("nb = 1   : %d\n", ft_find_next_prime(1));
//     printf("nb = 2   : %d\n", ft_find_next_prime(2));
//     printf("nb = 3   : %d\n", ft_find_next_prime(3));
//     printf("nb = 17  : %d\n", ft_find_next_prime(17));
//     printf("nb = 4   : %d\n", ft_find_next_prime(4));
//     printf("nb = 14  : %d\n", ft_find_next_prime(14));
//     printf("nb = 25  : %d\n", ft_find_next_prime(25));
//     printf("nb = 90  : %d\n", ft_find_next_prime(90));
//     printf("nb = 2147483647 : %d\n", ft_find_next_prime(2147483647));
//     return (0);
// }