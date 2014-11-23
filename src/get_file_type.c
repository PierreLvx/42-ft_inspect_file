/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:52:15 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:52:17 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_type(const char *filename)
{
	stat(filename, &fst);
	ft_putstr("Filetype: ");
	if (S_ISDIR(fst.st_mode))
		ft_putstr("Folder");
	if (S_ISREG(fst.st_mode))
		ft_putstr("Regular File");
	ft_putchar('\n');
}
