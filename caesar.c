#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        printf("plaintext ");
        string plainText = get_string();
        const int letters = 26;
        const int gapUpper = 65;
        const int gapLower = 97;
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plainText); i++)
        {
            if (isalpha(plainText[i]))
            {
                if (isupper(plainText[i]))
                {
                    printf("%c", (((plainText[i] - gapUpper) + key) % letters) + gapUpper);
                }

                if (islower(plainText[i]))
                {
                    printf("%c", ((((plainText[i] - gapLower) + key) % letters) + gapLower));
                }
            }

            else
            {
                printf("%c", plainText[i]);
            }
        }
        printf("\n");

        return 0;
    }
    else return 1;
}
