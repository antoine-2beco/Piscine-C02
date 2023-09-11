/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:06:24 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 11:11:28 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
