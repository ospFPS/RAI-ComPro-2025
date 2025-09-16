#include <stdio.h>
#include <string.h>

int check(char base[]) 
{
    int i=0;
    int cnt=0;

    for (i=0;base[i]!='\0';i++) 
    {
        if (base[i] == 'a' || base[i] == 'e' || base[i] == 'i' || base[i] == 'o' || base[i] == 'u' 
            || base[i] == 'A' || base[i] == 'E' || base[i] == 'I' || base[i] == 'O' || base[i] == 'U') 
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    char word1[10], word2[10];
    printf("Input: ");
    scanf("%s %s", word1, word2);
    int total = check(word1) + check(word2);
    printf("Output: Number of vowels: %d\n", total);
    return 0;
}
