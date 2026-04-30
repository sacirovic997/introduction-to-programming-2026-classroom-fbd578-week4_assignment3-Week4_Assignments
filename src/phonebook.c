#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string phone;
}
Person;

int main(void)
{
    Person people[5] =
    {
        {"Alice",   "061-111-1111"},
        {"Bob",     "062-222-2222"},
        {"Charlie", "063-333-3333"},
        {"Diana",   "064-444-4444"},
        {"Eve",     "065-555-5555"}
    };

    string query = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(people[i].name, query) == 0)
        {
            printf("%s\n", people[i].phone);
            return 0;
        }
    }

    printf("Not found\n");
}
