/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:41:06 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/14 15:47:03 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c, int *count)
{
	int	control;

	control = write(1, &c, 1);
	(*count)++;
	if (control == -1)
		return ;
}