/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <skuznets@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:01:54 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/09 18:03:05 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
//
//int main(int argc, char **argv)
//{
//	if (argc != 2)
//	{
//		ft_putstr("Usage: ./ft_putstr <string>\n");
//		return 1;
//	}

//	ft_putstr(argv[1]);
//	return 0;
//}