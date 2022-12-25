//C program to check vowel or consonant

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    // char vow={'a','e','i','o','u'};

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel", ch);
    }
    else if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z')
    {
        printf("%c is consonant", ch);
    }else{
         printf("Not a alphabet");
    }

    return 0;
}