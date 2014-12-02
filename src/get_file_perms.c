/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_perms.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:55 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/02 23:57:58 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_perms(const char *filename)
{
	stat(filename, &fst);
	ft_putstr("Permissions: ");
	ft_putchar((S_ISDIR(fst.st_mode)) ? 'd' : '-');
	ft_putchar((fst.st_mode & S_IRUSR) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWUSR) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXUSR) ? 'x' : '-');
	ft_putchar((fst.st_mode & S_IRGRP) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWGRP) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXGRP) ? 'x' : '-');
	ft_putchar((fst.st_mode & S_IROTH) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWOTH) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXOTH) ? 'x' : '-');
	get_file_xattr(filename) ? ft_putchar('@') : ft_putchar(' ');
	ft_putchar('\n');
}
