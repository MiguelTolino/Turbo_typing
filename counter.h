/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 02:11:06 by miguel            #+#    #+#             */
/*   Updated: 2020/02/25 18:06:03 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef COUNTER_H
 #define COUNTER_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct s_words
{
    char str[30];
    double time;
    
}t_words;

void first_message(int *n_words);

#endif



