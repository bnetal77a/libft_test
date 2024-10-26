/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:14:34 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/26 09:41:21 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	f;
	int	count_word;
	int	i;

	count_word = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (f == 0)
		{
			f = 1;
			count_word++;
		}
		i++;
	}
	return (count_word);
}

char	*ft_create_word(char const *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			dest[i++] = ft_create_word(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
// int main(void)
// {
//     char str[] = " hello, world, winners, simo";
//     char charset = ',';

//     char **result = ft_split(str, charset);
//     if (result)
//     {
//         for (int i = 0; result[i] != NULL; i++)
//         {
//             printf("%s\n", result[i]);
//             free(result[i]); // Free each word after use
//         }
//         free(result); // Free the array of strings
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }
