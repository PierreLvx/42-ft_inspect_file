/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 16:40:13 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/03 00:04:01 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

int					inspect_file(char *filename)
{
	if (stat(filename, &fst))
	{
		ft_putstr_fd("ERROR: ", 2);
		ft_putendl_fd(strerror(errno), 2);
		return (0);
	}
	get_file_name((const char*)filename);
	get_file_type((const char*)filename);
	get_file_perms((const char*)filename);
	get_file_links();
	get_file_owner((const char*)filename);
	get_file_group((const char*)filename);
	get_file_size((const char*)filename);
	get_file_modtime((const char*)filename);
	return (0);
}
