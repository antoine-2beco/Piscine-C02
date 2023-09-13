/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/13 11:18:09 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

void ft_putstr_non_printable(char *str)
{
	int		x;
	int		i;
	char	temp;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < ft_strlen(str))
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			write(1, "\\", 1);
			temp = str[i];
			x = (unsigned char)temp / 16;
			write(1, &hex[x], 1);
			x = (unsigned char)temp % 16;
			write(1, &hex[x], 1);
		}
		else
		{
			temp = str[i];
			write(1, &temp, 1);
		}
		i++;
	}
}
/*
int main(void)
{
	char str[] = {"Coucou\ntu vas bien ?\a \b \t \n \v \f \r \e \\ \? \'"};
	char str2[3];
	str2[0] = 14;
	str2[1] = -1;
	str2[2] = 127;
	ft_putstr_non_printable(str2);
	return (0);
}
*/
