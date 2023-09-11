/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:00:24 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 11:12:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
