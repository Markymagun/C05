/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:04:35 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/18 16:15:47 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;

	if (nb <= 0)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {

//     printf("nb = -5 : %d\n", ft_sqrt(-5));
//     printf("nb = 0  : %d\n", ft_sqrt(0));
//     printf("nb = 1  : %d\n", ft_sqrt(1));
//     printf("nb = 4  : %d\n", ft_sqrt(4));
//     printf("nb = 9  : %d\n", ft_sqrt(9));
//     printf("nb = 25 : %d\n", ft_sqrt(25));
//     printf("nb = 36 : %d\n", ft_sqrt(36));
//     printf("nb = 2  : %d\n", ft_sqrt(2));
//     printf("nb = 3  : %d\n", ft_sqrt(3));
//     printf("nb = 10 : %d\n", ft_sqrt(10));
//     printf("nb = 24 : %d\n", ft_sqrt(24));
//     printf("nb = 2147395600 : %d\n", ft_sqrt(2147395600));
//     printf("nb = 2147483647 : %d\n", ft_sqrt(2147483647));
//     return (0);
// }

// long int กัน 46341 * 46341 = 2,147,488,281
//(Buffer overflow)
// max int = 2,147,483,647