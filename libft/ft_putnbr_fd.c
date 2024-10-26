/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:32 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/24 09:45:25 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number <= 9)
		ft_putchar_fd(number + '0', fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}
// int	main(void)
// {
// 	int fd = open("test.txt", O_WRONLY | O_CREAT);
// 	if (fd == -1)
// 		printf("error");
// 	ft_putnbr_fd(2215, fd);
// 	close(fd);
// }