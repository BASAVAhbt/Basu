#include "tag.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
void call_function(FILE *fp);
int main(int argc, char *argv[])
{
	//call the validate function 
	validate_CLA(argc);
	//call function for validate the extension and file formate 
	validate_file_format(argv[2]);

	//function call for view the tags of audio file 
	if (((strcmp(argv[1], "-v")) == 0) && (argc == 3))
	{
		checking(argc, argv);
	}

	//cal the function foe edit the tags as per CLA 
	if ((argc > 3) && ((strcmp(argv[1], "-e")) == 0))
	{
		alter(argc, argv);
	}

	if (((strcmp(argv[1], "-h")) == 0) && (argc == 3))
	{
		printf("\n\n---------------------------------------------------\n");
		printf("Help meanu for mp3 Tag reader and editer\n");
		printf("---------------------------------------------------\n\n");
		printf("modifier\t\tFunction\n   -t\t\t\tModifies Title Tag\n   -T\t    \t\tModofies Track tag\n   -a\t\t\tModifies Artist Tag\n   -A\t\t\tModifies     Album Tag\n   -y\t\t\tModifies Year Tag\n   -c\t\t\tModifies Comment Tag\n   -g\t\t\tModifies Gener Tag\n");

		printf("\n-----------------------------------------------------\n\n");
	}
	if ((argc == 3) && ((strcmp(argv[1], "-i")) == 0))
	{
		extract_image(argc, argv);
	}

	if (((strcmp(argv[1], "-k")) == 0) && (argc == 3))
	{
		pointer_pos(argv[2]);
	}

}


