/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 02:11:17 by miguel            #+#    #+#             */
/*   Updated: 2020/02/20 17:57:56 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "counter.h"

void initial_msg(int *difficult)
{
	int i;

	i = 3;
	printf("How difficult do you prefer to play? \n");
	printf("1) Easy\n2) Normal\n3) Extreme\n");
	printf("Your election: ");
	scanf("%i", difficult);
	system("clear");
	printf("Now, type the followings words as fast as you can.\n");
	system("clear");
	printf("Are you ready?\n");
	printf("The game will start in ... \t");
	sleep(2);
	while (i > 0)
	{
		printf("%i\t", i--);
	}
	sleep(1);
	printf("\n");
	system("clear");
}

void gameloop(int difficult, FILE *fd)
{
	char a[50];
	char b[50];
	int puntuation;
	int i;
	int count;

	count = 0;
	while (1)
	{
		i = 0;
		while ((a[i] = fgetc(fd)) != ' ')
		{
			i++;
		}
		a[i] = '\0';
		printf("%s\n", a);
		scanf("%s", b);
		system("clear");
		while (strcmp(a, b) != 0)
		{
			printf("%s\n", a);
			scanf("%s", b);
			system("clear");

		}
		system("clear");
	}
}

int main()
{
	int difficult;
	FILE *fd;
	int n_words;
	t_words *word;

	fd = fopen("test.txt", "r");
	if (fd == NULL)
	{
		perror("No se pudo abrir correctamente");
		return (-1);
	}
	n_words = count_words(fd);
	save_words(word, n_words);
	

	initial_msg(&difficult);
	gameloop(difficult, fd);
}
