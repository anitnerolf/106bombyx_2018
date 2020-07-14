/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** check_number
*/

#include "my.h"

int	check_for_dot(char *av)
{
    int	i = 0;

    for (i = 0; av[i] != '\0'; i++) {
        if (av[i] < '0' || av[i] > '9')
            return (1);
    }
    return (0);
}

int	check_number(char *av)
{
    int	i = 0;

    for (i = 0; av[i] != '\0'; i++) {
        if ((av[i] < '0' || av[i] > '9') && av[i] != '.')
            return (1);
    }
    return (0);
}
