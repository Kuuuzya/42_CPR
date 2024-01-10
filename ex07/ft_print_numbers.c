/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:27:36 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/10 15:32:50 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_print_numbers(void)
{
	char	t;

	t = '0';
	while (t <= '9')
	{
		ft_putchar(t);
		t++;
	}
}
// int main (void)
// {
// 	ft_print_numbers();
// 	return 0;
// }