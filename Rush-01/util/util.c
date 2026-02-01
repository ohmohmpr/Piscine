/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:48:19 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 16:03:29 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_strlen_without_space(char *str)
{
	int	len;
	int	count_char;

	count_char = 0;
	len = 0;
	while (str[len])
	{
		if (str[len] != 32)
		{
			count_char++;
		}
		len++;
	}
	return (count_char);
}

char	*ft_input_delete_space(char *dst, char *str)
{
	while (*str)
	{
		if (*str != 32)
			*dst = *str;
		str++;
	}
	return (dst);
}
