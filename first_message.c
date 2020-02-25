/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:04:29 by miguel            #+#    #+#             */
/*   Updated: 2020/02/25 18:15:59 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "counter.h"

void first_message(int *n_words, int *difficult)
{
    int exit;
    
    system("clear");
    printf("TURBO TYPING\n");
    printf("------------\n");
    printf("\n");
    printf("How many words would you like to type?\n");
    printf("Number of words: ");
    scanf("%i", n_words);
    while (*n_words <= 0)
    {
        system("clear");
        printf("Number of words must be bigger than 0\n");
        printf("Number of words: ");
        scanf("%i", n_words);
    }
    system("clear");
    printf("Good choice, now be ready\n");
    printf("Press any key to continue\n");
    scanf("%i", &exit);
    system("clear");
}