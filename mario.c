#include <cs50.h>
#include <stdio.h>

void    print_space(int n);
void    print_pound(int n);

int main(void)
{
    // prompt user for height
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while
    (height < 0 || height > 23);

    // prints space and pound using helper functions
    int space;
    for (int i = 1; i <= height; i++)
    {
        space = height - i;
        print_space(space);
        print_pound(i);
        print_space(2);
        print_pound(i);
        printf("\n");
    }
}

// helper function for printing n number of spaces
void print_space(int n)
{
    for (int i = 0; i < n; i++)
        printf(" ");
}

// helper function for printing n number of pounds
void print_pound(int n)
{
    for (int i = 0; i < n; i++)
        printf("#");
}