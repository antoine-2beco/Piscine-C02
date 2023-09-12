/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:04:31 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 12:13:31 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = {"hFDSFDSFDSFDS645^&%^%"};
	char *res = {ft_strlowcase(str)};
	int x = 0;
	char temp;

	while (res[x] != '\0')
	{
		temp = str[x];
		write(1, &temp, 1);
		x++;
	}
	return (0);
}
*/