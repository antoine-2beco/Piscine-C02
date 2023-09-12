/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:16:37 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 14:56:49 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i + 1] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if ((i == 0) || ((!((str[i - 1] >= '0') && (str[i - 1] <= '9')))
					&& (!((str[i - 1] >= 'a') && (str[i - 1] <= 'z')))
					&& (!((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')))))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = {"salut, coMMent tu i vas ? 42m+un"};
// 	char *res = {ft_strcapitalize(str)};
// 	int x = 0;
// 	char temp;

// 	while (res[x] != '\0')
// 	{
// 		temp = str[x];
// 		write(1, &temp, 1);
// 		x++;
// 	}
// 	return (0);
// }