/*
** EPITECH PROJECT, 2019
** bombyx
** File description:
** main
*/

#include "my.h"

integers_t	*get_int(char **av)
{
    integers_t	*i = malloc(sizeof(integers_t));

    i->ret = 0;
    i->a = atof(av[1]);
    i->b = atof(av[2]);
    i->c = 0;
    i->d = 0;
    i->e = 0;
    i->m = 0;
    return (i);
}

void	usage_h(void)
{
    printf("USAGE\n\t./106bombyx n [k | i0 i1]\n\n");
    printf("DESCRIPTION\n\tn\tnumber of first generation");
    printf(" individuals\n\tk\tgrowth rate from 1 to 4\n");
    printf("\ti0\tinitial generation (included)\n\t");
    printf("i1\tfinal generation (included)\n");
}

int	check_argument(int ac, char **av, \
    integers_t *i)
{
    if (ac == 3) {
        if (check_for_dot(av[1]) == 1 || \
    check_number(av[2]) == 1) {
            write(2, "POSITIVE NUMBERS ONLY!\n", 23);
            i->ret = 84;
        } else
            one_generation(av, i);
    } else if (ac == 4) {
        if (check_for_dot(av[1]) == 1 || \
    check_for_dot(av[2]) == 1 || check_for_dot(av[3]) == 1 \
    || atoi(av[1]) >= atoi(av[2]) || atoi(av[1]) <= 0) {
            write(2, "POSITIVE NUMBERS ONLY!\n", 23);
            i->ret = 84;
        } else
            two_generation(av, i);
    } else
        i->ret = 84;
    return (i->ret);
}

int	main(int ac, char **av)
{
    integers_t *i = malloc(sizeof(integers_t));

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            usage_h();
        } else
            return (84);
    } else if (ac == 3 || ac == 4) {
        i = get_int(av);
        check_argument(ac, av, i);
    } else
        return (84);
    return (i->ret);
}
