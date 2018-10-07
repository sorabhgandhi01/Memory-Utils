/**
 * @\file	help.c
 * @\author	Sorabh Gandhi / Sanju Prakash Kannioth
 * @\brief	This file contains the definition of help functionality for memory utils
 * @\date	09/25/2018
 *
 */
						   
/*system headers*/
#include <stdio.h>

/* Own headers */
#include "help.h"

/**
--------------------------------------------------------------------------------------------
help
--------------------------------------------------------------------------------------------
*   This function will list the available commands and how to invoke them
*
*   @\param     void
*
*   @\return    "SUCCESS"
*
*/
mem_status help()
{
	print_msg("Usage: [Command] [argument] \n\n The following commands are supported \n \
		allocate <N block>\n	\
	free \n	\
	read <flag> <arg> <next N blocks>\n	\
	write <flag> <arg> <data> \n	\
	invert <flag> <arg> <next N blocks> \n	\
	wpattern <flag> <arg> <next N blocks> <seed> \n	\
	vpattern <flag> <arg> <next N blocks> <seed> \n	\
	exit \n\n	\
	Use Flag --> '-a' to specify address and '-b' to specify offset\n\
	\tUse arg --> Offset value if '-b' is flag and Address if '-a' is flag\n\n\
	\tNote: read, write, invert, wpattern and vpattern take hexadecimal inputs\n"); 	
	return SUCCESS;
}
