/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:26:24 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/08 20:28:39 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int counter;
	char temp;

	counter = 0;

	while (&str[counter] != '\0')
	{
		temp = str[counter];
		write(1, &str[counter], 1);
		if ((97 <= temp) || (temp <= 122) || (65 <= temp) || (temp <= 90))
		{
			counter++;
		}
		else
		{
			write(1, "0", 1);
			return (0);
		}
	}
	write(1, "1", 1);
	return (1);
}

int	main(void)
{	
	char str[]  = {"!58fds545"};
	ft_str_is_alpha(str);

	char str2[3];
	//ft_str_is_alpha(str2);

	char str3[] = {"!58545"};
	ft_str_is_alpha(str3);
	return (0);
}
