/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_modtime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:19 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:51:29 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_modtime(const char *filename)
{
	stat(filename, &fst);
	ft_putstr("Last modification: ");
	ft_putstr(ctime(&fst.st_mtime));
}
