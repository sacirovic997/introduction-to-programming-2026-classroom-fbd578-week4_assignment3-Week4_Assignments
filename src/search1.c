#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int size = 5;

    string query = get_string("Name: ");

    for (int i = 0; i < size; i++)
    {
        if (strcmp(names[i], query) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
}
