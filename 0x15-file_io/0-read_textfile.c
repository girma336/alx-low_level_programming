#include "main.h"

/**
 *read_textfile-create text file
 *@filename:this is name of file
 *@letters:size of letter
 *Return:size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, s, t;
char *buf;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
s = read(fd, buf, letters);

if (s < 0)
{
free(buf);
return (0);
}
buf[s] = '\0';
close(fd);

t = write(STDOUT_FILENO, buf, s);
if (t < 0)
{
free(buf);
return (0);
}
free(buf);
return (t);
}
