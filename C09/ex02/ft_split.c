/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:01 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/23 23:40:05 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int	find_length(char *str, char *sep)
{
	int	count = 0;
	int	i = 0;

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
}


// int	main(void)
// { 
// 	char *sep = " ,! ";
// 	char *str = "      Hello   ,!        World";

// 	printf("%d", find_length(str,sep));
// }

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**array;
	int		word_count;
	int k;
	int j;
	i = 0;
	word_count = find_length(str, charset);
	array = (char **)malloc(sizeof(char) * (find_length(str, charset) + 1 ));
	if (!array)
		return NULL;
	while (i < word_count) 
	{
		word_count = 0;
		while (str[k] != '\0' && charset[j] != '\0' && str[k] == charset[j]) 
		{
			k++;
			j++;
		}
		if (charset[j] == '\0') 
		{
			while (str[k] != '\0' && str[k] == charset[j - 1]) 
			{
				k++;
				word_count++;
			}
		}

		array[i] = (char *)malloc(sizeof(char) * (word_count + 1));
		if (!array[i])
			return NULL;

		j = 0;
		while (j < word_count) 
		{
			array[i][j] = str[k - word_count + j];
			j++;
		}

		array[i][j] = '\0';
		i++;
	}
	array[i] = NULL;
	return array;
}
int main(void) {
    char *sep = " ,! ";
    char *str = "      Hello   ,!        World";
    char **result = ft_split(str, sep);

    if (result == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]); // Free the memory allocated for each word
        i++;
    }
    free(result); // Free the memory allocated for the array of strings

    return 0;


	char **ft_split(char *str, char *charset)
{
	int i = 0;
	int j = 0;
	int word_count = ft_strstr(str, charset);
	char **array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return NULL;
	while (i < word_count)
	{
		while (str[j] != '\0' && ft_strstr(&str[j], charset) == 0)
			j++;
		int start = j;
		while (str[j] != '\0' && ft_strstr(&str[j], charset) == 0)
			j++;
		int length = j - start;
		array[i] = (char *)malloc(sizeof(char) * (length + 1));
		if (!array[i])
			return NULL;
		for (int k = 0; k < length; k++)
			array[i][k] = str[start + k];
		array[i][length] = '\0';
		i++;
	}
	array[word_count] = NULL;
	return array;
}

}