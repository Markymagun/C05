#include <stdio.h>

int is_safe(int *board, int current_col, int test_row)
{
    int i;

    i = 0;
    while (i < current_col)
    {
        if (board[i] == test_row || current_col - i == test_row - board[i] || 
        current_col - i == board[i] - test_row)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int solve_queens(int *board, int col)
{
    int i = 0;
    int count;

    if (col == 10)
    {
        while (i != 10)
        {
            write(1, &board[i], 1);
            write(1, "\n", 1);
        }
    }

    while (i)
}

int ft_ten_queens_puzzle(void)
{
    int board[10];

}