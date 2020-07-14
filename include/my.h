/*
** EPITECH PROJECT, 2019
** bombyx
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef	struct	integers
{
    int	ret;
    double	a;
    double	b;
    double	c;
    double	d;
    double	e;
    double	m;
}	integers_t;

void	usage_h(void);
int	one_generation(char **av, integers_t *i);
integers_t	*get_int(char **av);
int	check_number(char *av);
int	check_for_dot(char *av);
double	first_calc(integers_t *i, double x);
double	second_calc(double x, double y);
void	two_generation(char **av, integers_t *i);

#endif /* MY_H */
