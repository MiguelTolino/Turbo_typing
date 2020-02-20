/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 02:11:17 by miguel            #+#    #+#             */
/*   Updated: 2020/02/20 03:52:42 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "counter.h"

void initial_msg(int difficult)
{
	int i;

	i = 3;
	printf("How difficult do you prefer to play? \n");
	printf("1) Easy\n2) Normal\n3) Extreme\n");
	printf("Your election: ");
	scanf("%i", &difficult);
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

void gameloop(int difficult)
{
	char *a;
	char b[50];
	int puntuation;
	int br;
	
	while ((br = get_next_line(&a)) > 0)
	{
		printf("%s\n", a);
		scanf("%s", b);
		system("clear");
		while(strcmp(a,b) != 0)
		{
			printf("%s\n", a);
			scanf("%s", b);
			system("clear");
		}
		free(a);
	}
	
}

int main()
{
	int difficult;

	initial_msg(difficult);
	gameloop(difficult);
	
	
	
	
}