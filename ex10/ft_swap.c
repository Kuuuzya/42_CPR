/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:52:58 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/10 14:20:06 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
} */