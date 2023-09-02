#include <stdio.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int c, char **v)
{
	if (c < 1)
		return (0);
	int i = 1;
	char *sep;
	sep = v[1];
	printf("%s\n", ft_strjoin(c - 2, &v[2], sep));
}