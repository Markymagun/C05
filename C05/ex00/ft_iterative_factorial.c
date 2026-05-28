/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:49:17 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/28 20:42:19 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

// int main()
// {
//     printf("%d", ft_iteractive_factorial(5));
// }

//วิธี 2
//int	ft_iterative_factorial(int nb)
// {
// 	int	result;
// 	int	i;

// 	if (nb < 0)
// 	{
// 		return (0);
// 	}
// 	result = 1;
// 	i = 1;
// 	while (i <= nb)
// 	{
// 		result = result * i;
// 		i++;
// 	}
// 	return (result);
// }

//ก่อนเข้าลูป คุณตั้งค่าไว้ว่า result = 1; (บรรทัด 28)

// พอมาเจอ while (1 <= 0) ปุ๊บ... เป็นเท็จ
// มันเลยกระโดดข้ามลูป while ทั้งก้อนลงมาที่บรรทัด 35 ทันที

// บรรทัด 35 สั่งว่า return (result);

// นั่นแปลว่า ค่าที่ถูกส่งกลับออกไปจริงๆ
// คือค่าของ result ณ วินาทีนั้น ซึ่งก็คือเลข 1