/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:45 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/26 12:07:12 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill(char *str, int n, int length)
{
	int	index;
	int	i;

	i = 0;
	index = length - 1;
	while (n > 0)
	{
		i = n % 10;
		str[index] = i + '0';
		n /= 10;
		index--;
	}
	str[length] = '\0';
}

char	*check_n_0(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		str = (char *)malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
	}
	return (str);
}

int	int_lenght(int n)
{
	int	length;
	int	is_negative;

	length = 0;
	is_negative = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	if (is_negative)
		length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		is_negative;
	int		length;
	int		index;

	is_negative = 0;
	if (n == 0)
		check_n_0(n);
	length = int_lenght(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	index = length - 1;
	while (n > 0)
	{
		i = n % 10;
		str[index] = i + '0';
		n /= 10;
		index--;
	}
	fill(str, n, length);
	return (str);
}
// int main()
// {
// 	int x= 1542;
// 	char *s = ft_itoa(x);
// 	printf("%s",s);
// }