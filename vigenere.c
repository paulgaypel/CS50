#include <ctype.h>
#include <stdlib.h>
#include<string.h>
#include<cs50.h>
#include<stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int keyInt [strlen(argv[1])];
        const int wrapUpper = 65;
        const int wrapLower = 97;
        const int letters = 26;
        int j = 0;
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isalpha(argv[1][i]))
            {
                if (isupper(argv[1][i]))
                {
                    keyInt[i] = argv[1][i] - wrapUpper;
                }
                if (islower(argv[1][i]))
                {
                    keyInt[i] = argv[1][i] - wrapLower;
                }
            }
            else
            {
                return 1;
            }
        }

        printf("plaintext: ");

        string plainText = get_string();

        printf("ciphertext: ");

        for (int i = 0; i < strlen(plainText); i++)
        {
            j = j % strlen(argv[1]);
            if (isalpha(plainText[i]))
            {
                if (isupper(plainText[i]))
                {
                    printf("%c", ((((plainText[i] - wrapUpper) + keyInt[j]) % letters) + wrapUpper));
                }
                if (islower(plainText[i]))
                {
                    printf("%c", ((((plainText[i] - wrapLower) + keyInt[j]) % letters) + wrapLower));
                }
                j++;
            }
            else
            {
                printf("%c", plainText[i]);
            }
        }
        printf("\n");
        return 0;
    }

    else
    {
        return 1;
    }

}

