#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>
typedef enum {FALSE = 0,TRUE = 1}t_bool; //
#define EVEN(x) ((x) % 2 == 0) 
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif