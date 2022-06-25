/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:36:16 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/05/28 16:36:16 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_unint(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
