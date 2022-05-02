#include "main.h"

/**
 *create_file-read the text file from the user
 *@text_content:size of letter
 *@filename:name of file
 *Return:int
 */

int create_file(const char *filename, char *text_content)
{
int fd, t, s = 0;
if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd < 0)
return (-1);

if (text_content)
{
while (text_content[s])
s++;
t = write(fd, text_content, s);
if (t != s)
return (-1);
}
close(fd);
return (1);
}
