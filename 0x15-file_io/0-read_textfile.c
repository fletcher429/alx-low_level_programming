#include "main.h"
/**
 * read_textfile - reads and prints files content to thne S
 * @letters: letters to be printed
 * @filename: file_name to be read
 * Return: printed text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dec; /*open the file*/
	int read_f; /*read the file*/
	int write_f; /*writ the file to the stout*/
	char buffer[2048]; /*stores the letters*/
	if (!filename)
		return (0);

	file_dec = open(filename, O_RDONLY);
	if (file_dec < 0)
		return (0);

	read_f = read(file_dec, buffer, letters);
	if (read_f < 0)
		return (0);
	buffer[read_f] = '\0';
	close(file_dec);
	write_f = write(STDOUT_FILENO, buffer, read_f);
	if (write_f < 0)
		return (0);
	return (write_f);
}