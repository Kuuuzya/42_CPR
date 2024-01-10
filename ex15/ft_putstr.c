/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:30:03 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/10 15:33:49 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
// int main(void)
// {
// 	ft_putstr("tes");
// 	return (0);
// }