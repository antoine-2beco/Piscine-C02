/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:24:31 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 11:58:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = {"hfsdfdsf^&%^%"};
	char *res = {ft_strupcase(str)};
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