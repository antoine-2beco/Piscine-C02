/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:21:54 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/11 10:31:28 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char	*a)
{
	char temp;
	int i;

	i = 0;
	while(*a)
	{
		temp = a[i];
		write(1, &temp, 1);
		a++;
	}
	write(1, "\n", 1);
}

int ft_strlen(char *str)
{
    int x;

    x = 0;
    while (*str)
    {
        str++;
        x++;
    }
    return (x);

}
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	char x;
	unsigned int	i;
	
	ft_putstr(src);
	ft_putstr(dest);
	counter = 0;
	while (counter <= n)
	{
		while (counter <= ft_strlen(src) && counter <= n)
		{
			dest[i] = src[i];
			dest++;
			src++;
			counter++;
		}
		x = '\0';
		dest[i] = x;
		dest++;
		counter++;
	}
	ft_putstr(dest);
	return (dest);
}

 int main(void)
{
	char src[6] = "Salut";
	char dest[10];
	unsigned int n = 10;

	ft_strncpy(dest, src, n);
	return (0);
}

