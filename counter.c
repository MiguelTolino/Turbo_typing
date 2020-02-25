/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 02:11:17 by miguel            #+#    #+#             */
/*   Updated: 2020/02/25 18:18:03 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_WORD 80383
#include "counter.h"

int main()
{
	int difficult;
	FILE *file;
	int n_words;
	int i = 0;
	int j = 0;
	char c;
	time_t t1, t2, t3, t4;
	double diff_total, diff_parcial;

	first_message(&n_words, &difficult);
	char s1[MAX_WORD][30];
	char s2[50];
	t_words word[n_words];

	file = fopen("words.txt", "r");
	if (file == NULL)
	{
		perror("No se pudo abrir correctamente");
		return (-1);
	}
	while (!feof(file) && i < 80000)
	{
		j = 0;
		while ((s1[i][j] = fgetc(file)) != EOF && isalnum(s1[i][j]))
		{
			j++;
		}
		if (j > 0)
		{
			s1[i][j] = '\0';
			i++;
		}
	}
	
	j = 0;
	int index;
	t1 = time(NULL);
	srand(time(NULL));
	while (j < n_words)
	{
		index = rand() % i;
		printf("%s\n", s1[index]);
		t3 = time(NULL);
		scanf("%s", s2);
		system("clear");
		while (strcmp(s1[index], s2) != 0)
		{
			printf("%s\n", s1[index]);
			scanf("%s", s2);
			system("clear");
		}
		t4 = time(NULL);
		strcpy(word[j].str, s1[index]);
		word[j].time = difftime(t4, t3);
		j++;
	}
	t2 = time(NULL);
	diff_total = difftime(t2,t1);
	printf("Total time: %i seconds\n\n", (int)diff_total);
	
	j = 0;
	printf("Words vs Time\n");
	while (j < n_words)
	{
		printf("%s - %i seconds\n", word[j].str, (int)word[j].time);
		j++;
	}
	printf("\nGAME OVER\n");
	printf("Press any key to exit\n"); 
	scanf("%i", &i);
	system("clear");
	fclose(file);
	return (0);
}
