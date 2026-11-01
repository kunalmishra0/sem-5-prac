/* AIM: To find the occurrence of a pattern string using Naive String algorithm. */

#include <stdio.h>
#include <string.h>
void naiveSearch(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);
    int found = 0;
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
        {
            printf("Pattern found at position: %d\n", i + 1);
            found = 1;
        }
    }
    if (!found)
        printf("Pattern not found\n");
}
int main()
{
    char text[100], pattern[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    /* Remove newline character */
    text[strcspn(text, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';
    naiveSearch(text, pattern);
    return 0;
}

