/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:04 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:51:07 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_group(const char *filename)
{
	struct group	*gr;

	stat(filename, &fst);
	gr = getgrgid(fst.st_gid);
	ft_putstr("Group: ");
	if (gr)
		ft_putstr(gr->gr_name);
	ft_putchar('\n');
}
