/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:01:35 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/28 15:11:04 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int *count)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*count)++;
	}
}
