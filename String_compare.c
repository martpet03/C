#include <stdio.h>

int compare_strings(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Vuvedete purvi niz: ");
    fgets(str1, 100, stdin);

    printf("Vuvedete vtori niz: ");
    fgets(str2, 100, stdin);

    int are_equal = compare_strings(str1, str2);

    if(are_equal)
    {
        printf("Stringovete sa ravni.\n");
    }
    else
    {
        printf("Stringovete ne sa ravni.\n");
    }

    return 0;
}
