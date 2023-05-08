#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @letter:  contents of the file
 * Return: created_file
 */

int create_file(const char *filename, char *text_content)
{
	char *buf;
	int file_name;
   	 int write_file;
   	 int read_file;


	buf = malloc(strlen(text_content) + 1);

	if (!buf)
		return (0);

	file_name = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_name < 0)
	{
        	free(buf);
       		 return (0);

   	 }

    read_file = strlen(text_content);
    strcpy(buf, text_content);

    buf[read_file] = '\0';

    write_file = write(file_name, buf, strlen(text_content));
    free(buf);
    if (write_file < 0)
    {
        close(file_name);
        return (-1);
    }
    return (1);


}

