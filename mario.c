#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height ;
    do
    {
        printf("Enter a number between 0 and 23 ");
       height = get_int();

    } while (height < 0 || height > 23);

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j <= height - i - 2; j++)
        {
            printf(" ");
        }
        for (int h = 0; h <= i + 1; h++)
        {
            printf("#");
        }

        printf("\n");
    }

}
