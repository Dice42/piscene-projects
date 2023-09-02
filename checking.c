int find_length(char *str, char *sep) 
	{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
	 {
        int j = 0;

        while (sep[j] != '\0' && sep[j] == str[i]) 
		{
            j++;
            i++;
        }

        if (sep[j] == '\0')
            count++;

        i++;
	 }
	    return count + 1;
	// printf("%d", count);
}
#include <stdio.h>

int	main(void)
{ 
	char *sep = " ,! ";
	char *str = "      Hello   ,!     ,!   World";

	printf("%d", find_length(str,sep));
}