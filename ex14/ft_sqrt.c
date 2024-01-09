/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <skuznets@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:51:14 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/09 17:58:32 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i > 46340)
				return (0);
			else if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return 1;
	}

	int nb = atoi(argv[1]);
	int result = ft_sqrt(nb);

	if (result == -1)
		printf("Error: Cannot calculate square root of a negative number.\n");
	else
		printf("%d\n", result);

	return 0;
}*/