/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:52:02 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:52:04 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void			get_file_size(const char *filename)
{
	if (stat(filename, &fst))
		fprintf(stderr, "'stat' failed for '%s': %s.\n", filename, strerror (errno));
	ft_putstr("Filesize: ");
	ft_putendl(ft_itoa((unsigned int)fst.st_size));
}
