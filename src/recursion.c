#include <cs50.h>
#include <stdio.h>

void pyramid(int n, int max);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    pyramid(1, n);
}

void pyramid(int row, int max)
{
    if (row > max)
    {
        return;
    }

    for (int i = 0; i < row; i++)
    {
        printf("#");
    }
    printf("\n");

    pyramid(row + 1, max);
}
