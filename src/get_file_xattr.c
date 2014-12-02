/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_xattr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 00:06:20 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/03 00:06:33 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

int					get_file_xattr(const char *filename)
{
	char			list[XATTR_MAXSIZE];

	return (listxattr(filename, list, XATTR_MAXSIZE, 0));
}
