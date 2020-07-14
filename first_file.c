/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** first_file
*/

#include "my.h"

double	second_calc(double x, double y)
{
    return (y * x * ((1000 - x) / 1000));
}

void	two_generation(char **av, integers_t *i)
{
    double	r = atof(av[3]);
    int	j = 1;
    double	k = 1;
    double	f = 1;

    while (k > 0 && k <= 4) {
        for (j = 1; j <= r; j++) {
            while (j < i->b) {
                i->a = second_calc(i->a, k);
                j++;
            }
            i->a = second_calc(i->a, k);
            printf("%.2f %.2f\n", k, i->a);
        }
        k = k + 0.01;
    }
}

double	first_calc(integers_t *i, double x)
{
    i->d = (1000 - x) / 1000;
    i->e = i->b * x;
    return (i->d * i->e);
}

int	one_generation(char **av, integers_t *i)
{
    int	j = 0;
    double k;

    if (i->a < 1 || i->b < 1 || i->b > 4) {
        write(2, "BAD INPUT!\n", 11);
        i->ret = 84;
    } else {
        i->m = first_calc(i, i->a);
        printf("1 %.2f\n2 %.2f\n", i->a, i->m);
        for (j = 3; j <= 100; j++) {
            k = first_calc(i, i->m);
            i->m = k;
            printf("%d %.2f\n", j, i->m);
        }
    }
    return (i->ret);
}
