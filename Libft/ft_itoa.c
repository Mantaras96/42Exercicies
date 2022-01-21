/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                            	                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 10:58:10 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t countChar(long number)
{
	size_t size;
	
	size = 0;
	if (number == 0){
		return (1);
	}
	if (number < 0){
		number = number * -1;
		size++;
	}
	while(number > 0){
		number = number / 10;
		size++;
	}

	return (size);

}

void convToChar(char *str, size_t size, long int number){
	size_t i;

	i = size;
	if (number < 0){
		str[0] = '-';
	}
	while(i > 0){
		printf("Numero dividir: number: %ld -> %ld", number, (number % 10) + '0');
		str[i] = (number % 10) + '0';
		number = number / 10;
		i--;  
	}
	
	*(str + (size + 1)) = '\0'; 
}

char *ft_itoa(int n){
	
	size_t size;
	char *str;
	long nbr;

	printf("Numero: %d\n", n);
	size = countChar(n);
	printf("Size: %zu\n", size);
	str = malloc(sizeof(char) * (size + 1));
	// if (!str){
	// 	return (0);
	// }
	// convToChar(str, size, n);

	// printf("Numero final:%s\n", str);
	// return (str);
	*(str + size--) = '\0';
	if (n < 0)
		nbr = n * -1;
	else
		nbr = n;
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return(str);
}