#ifndef SUDOKU_H
#define SUDOKU_H
#define TRUE 1
#define FALSE 0
#include <unistd.h>
#include <stdlib.h>
void	ft_aff(int **tab);
int		**ft_chartoint(char **argv);
int		ft_resolve(int **sudo, int pos, int i);
int		ft_online(int number, int y, int **sudo);
int		ft_oncolumn(int number, int x, int **sudo);
int		ft_onblock(int number, int y, int x, int **sudo);
int		ft_online2(int number, int y, int **sudo);
int		ft_oncolumn2(int number, int y, int **sudo);
int		ft_onblock2(int number, int y, int x, int **sudo);
int		ft_check(char **av);
int 	ft_verif(int **sudo, int pos, int i);
#endif
