/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 23:10:18 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/17 23:10:19 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
//ค่าของฟังก์ชันตัวปัจจุบัน (index)
//จะมีค่าเท่ากับ ก้อนซ้าย (index - 1) + ก้อนขวา (index - 2) เสมอ")
// ft_fibonacci(index) = ft_fibonacci(index - 1) + ft_fibonacci(index - 2)

// int main(void)
// {
//     printf("Index -5 : %d\n", ft_fibonacci(-5));
//     printf("Index  0 : %d\n", ft_fibonacci(0));
//     printf("Index  1 : %d\n", ft_fibonacci(1));
//     printf("Index  2 : %d\n", ft_fibonacci(2));
//     printf("Index  3 : %d\n", ft_fibonacci(3));
//     printf("Index  4 : %d\n", ft_fibonacci(4));
//     printf("Index  5 : %d\n", ft_fibonacci(5));
//     printf("Index  6 : %d\n", ft_fibonacci(6));
//     printf("Index 10 : %d\n", ft_fibonacci(10));

//     return (0);
// }