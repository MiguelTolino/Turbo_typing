/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:40:38 by miguel            #+#    #+#             */
/*   Updated: 2020/02/20 17:55:25 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "counter.h"

int count_words(FILE *fd)
{
    int i;
    int n_words;
    char c;

    n_words = 0;
    while (!feof(fd))
    {
        i = 0;
        while ((c = getc(fd)) != ' ')
        {
            i++;
        }
        n_words++;
    }
    return(n_words);
}