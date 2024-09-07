#include "print_number.h"

void print_number(char *number, char *dict) {

	// PRINT
}

t_label	*read_dict(char *dict) {
	char	*buff;
	int fd;
	char c;
	int nb_read;
	int count;
	int	index;

	index = 0;
	fd = open(NAME_FILE, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Not able to open the file.", sizeof("Not able to open the file."));
		return (0);
	}	
	nb_read = 1;
	count = 0;
	c = '\0';
	while (nb_read != 0)
	{
		nb_read = read(fd, &c, 1);
		count++;
	}
	close(fd);
	fd = open(NAME_FILE, O_RDONLY);
	buff = malloc(sizeof(char) * count);
	while (nb_read != 0)
	{
		nb_read = read(fd, buff, count);
		if (nb_read == -1)
		{
			write(1, "Read error!\n", sizeof("Read error\n"));
			return (1);
		}
		buff[count] = '\0';
	}
	write(1, buff, count);
	close(fd);
	return (0);
}
