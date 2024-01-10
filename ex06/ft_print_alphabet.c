/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:24:41 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/10 15:38:47 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while (t <= 'z')
	{
		ft_putchar(t);
		t = t + 1;
	}
}
// int main (void)
// {
// 	ft_print_alphabet();
// 	return 0;
// }
