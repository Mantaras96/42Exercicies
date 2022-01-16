/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/11 17:40:56 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	char 	*str_copy;
	char	*find_copy;
	size_t	i;
	size_t	j;
	size_t	k;

	str_copy = (char *) str;
	find_copy = (char *) to_find;
	i = 0;
	if (find_copy[0] == '\0')
		return (str_copy);
	while (str_copy[i] && i < len)
	{
		j = 0;
		k = i;
		while (str_copy[k] == find_copy[j]
			&& find_copy[j] && str_copy[k] && k < len)
		{
			k++;
			j++;
		}
		if (find_copy[j] == '\0')
			return (&str_copy[i]);
		i++;
	}
	return (0);
}
