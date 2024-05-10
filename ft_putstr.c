/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:01:35 by marojas-          #+#    #+#             */
/*   Updated: 2024/05/10 14:06:01 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int *count)
{
	int	i;

	if (!str)
		str = "(nil)";
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*count)++;
	}
}
