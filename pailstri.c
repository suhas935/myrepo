#include <stdio.h>
#include <string.h>

void checkPalindromeString();

void checkPalindromeString()
{
    char str[100];
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    // Compare characters from the start and end moving towards the center
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0; // If any characters don't match, it's not a palindrome
            break;
        }
    }

    if (flag)
        printf("\nThe string is a palindrome\n");
    else
        printf("\nThe string is not a palindrome\n");
}
