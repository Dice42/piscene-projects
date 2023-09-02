/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:37:52 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/23 21:05:17 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

int	main(void)
{
	// char *sep = " ,! ";
	// char *str = "      Hello   ,!        World ,! How";
	// int i = 0;
	// int j = 0;
	// int	count = 0;
	// while (str[i] != '\0')
	// {
	// 	j = 0;
	// 	int k = i;
	// 	int check = 1;
	// 	while(sep[j] != '\0')
	// 	{
	// 		if (str[k] != sep[j])
	// 		{
	// 			check = 0;
	// 			break;
	// 		}
	// 		k++;
	// 		j++;
	// 	}
	// 	if (check)
	// 	{
	// 		i = k;
	// 		count++;
	// 	}
	// 	i++;
	// }
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
	printf("%d", count);
    }
 
// 	printf("%d", count);
// }

// int main(void)
// {
// 	char *sep = " ,! ";
// 	char *str = "      Hello   ,!        World ,! How";
// 	int i = 0;
// 	int j = 0;
// 	int	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		j = 0;
// 		int k = i;
// 		int check = 1;
// 		while(sep[j] != '\0')
// 		{
// 			if (str[k] != sep[j])
// 			{
// 				check = 0;
// 				break;
// 			}
// 			k++;
// 			j++;
// 		}
// 		if (check)
// 		{
// 			i = k;
// 			count++;
// 			i -= 4;
// 			break;
// 		}
// 		i++;
// 	}
// 	j = 0;
// 	int k = 0;
// 	char *str1 = (char *)malloc(sizeof(char) * i);
// 	while (j < i)
// 	{
// 		str1[k] = str[j];
// 		k++;
// 		j++;
// 	}
// 	str1[k] = '\0';
// 	printf("%s", str1);
	
// }