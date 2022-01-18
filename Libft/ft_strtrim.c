/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 10:58:10 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int getStart(char const *s1, char const *set){
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len){
		if (ft_strchr(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (i);	
}

int getEnd(char const *s1, char const *set){
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - i]) == 0)
			return (len - i);
		i++;
	}
	return (len - i);	
}

 char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = getStart(s1, set);
	end = getEnd(s1, set);
	// printf("Start: %d", start);
	// printf("End: %d", end);
	
	if (start >= end){
		return (ft_strdup(""));
	}
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str){
		return (NULL);
	}
	// printf("End - start:%d", (end - start));
	ft_strlcpy(str, s1 + start, end - start + 1);
	return(str);
}



