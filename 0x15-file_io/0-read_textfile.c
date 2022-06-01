#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to the file to be read
 * @letters:number of letters to should read and print
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fread, fwrite;
char *total;

total = malloc(sizeof(char) * letters);
if (total == NULL)
return (0);
if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
return (0);
fread = read(file, total, letters);
if (fread ==  -1)
return (0);
fwrite = write(STDOUT_FILENO, total, fread);
if (fwrite == -1)
return (0);
close(file);
free(total);
return (fwrite);
}

