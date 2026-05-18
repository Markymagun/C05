/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:20:14 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/18 16:39:34 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    long int i;
    
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


int main(void)
{
    
    printf("nb = -10 : %d\n", ft_is_prime(-10));
    printf("nb = 0   : %d\n", ft_is_prime(0));
    printf("nb = 1   : %d\n", ft_is_prime(1));
    printf("nb = 2   : %d\n", ft_is_prime(2));
    printf("nb = 3   : %d\n", ft_is_prime(3));
    printf("nb = 17  : %d\n", ft_is_prime(17));
    printf("nb = 97  : %d\n", ft_is_prime(97));
    printf("nb = 4   : %d\n", ft_is_prime(4));  
    printf("nb = 9   : %d\n", ft_is_prime(9)); 
    printf("nb = 25  : %d\n", ft_is_prime(25));
    printf("nb = 100 : %d\n", ft_is_prime(100));
    printf("nb = 2147483647 : %d\n", ft_is_prime(2147483647)); 
    return (0);
}
//เช็คแค่ "รากที่สอง (Square Root)" ของตัวมันเองก็พอแล้ว!

// สมมติเช็คเลข 36 รากที่สองคือ 6

// ถ้าไม่มีเลขไหนตั้งแต่ 2 ถึง 6 ที่หาร 36 ลงตัวเลย
// ก็รับประกันได้ 100% ว่าเลขที่มากกว่า 6 (เช่น 7, 8, 9...)
// ก็จะไม่มีทางหารลงตัวเหมือนกันครับ!