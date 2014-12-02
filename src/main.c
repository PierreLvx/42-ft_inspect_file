/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 16:40:13 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/03 00:01:00 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RESOURCES:
** http://www.gnu.org/software/libc/manual/html_node/Testing-File-Type.html
** http://codewiki.wikidot.com/c:system-calls:stat (inode)
** http://web.eecs.utk.edu/~huangj/cs360/360/notes/Stat/lecture.html
** http://web.eecs.utk.edu/~plank/plank/classes/cs360/360/notes/Stat/lecture.html
** http://stackoverflow.com/questions/7328327/how-to-get-files-owner-name-in-linux-using-c
** http://www.jb.man.ac.uk/~slowe/cpp/lastmod.html
** http://pubs.opengroup.org/onlinepubs/009695399/functions/stat.html
** http://pubs.opengroup.org/onlinepubs/009695399/functions/getgrgid.html
** http://stackoverflow.com/questions/10446526/get-last-modified-time-of-file-in-linux
*/

#include "ft_inspect_file.h"

int					main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putendl("Usage: ft_inspect_file <file name>");
		return (-1);
	}
	inspect_file(argv[1]);
	return (0);
}
