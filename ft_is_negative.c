/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <skuznets@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 02:10:52 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/09 02:20:23 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    char c;
    if (n < 0)
    {
        c = 'N';
        write(1, &c, 1);
    }
    else
    {
        c = 'P';
        write(1, &c, 1);
    }
}

