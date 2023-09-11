/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 18:36:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int x;
	int i;
	int z;
	char temp;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			x = str[i];
			if (x < 10)
				a = '0' + x
			else if ((x > 15) && (x < 26))
				a = x - 6;
			else if (x < 16)
				x = x - 10;
				ft_getletter(x);
			else if (x > 25)
				x = x - 26;
				ft_getletter(x);
		}
		i++;
		temp = str[i] + '0';
		write(1, &temp, 1);
	}
}

int main(void)
{
	char str[] = {"Coucou\ntu vas bien"}
	ft_putstr_non_printable(str);
	return (0);
}



