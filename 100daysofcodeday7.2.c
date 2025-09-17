#include <stdio.h>
int main() {
     char vowel;
    printf("enter a character:");
    scanf("%c", &vowel);
    if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u' || vowel == 'A' || vowel=='E'
|| vowel=='I' || vowel=='O' || vowel=='U')
    {
        printf("character %c is vowel\n", vowel);
    } 
    else
    {
        printf("character %c is consonant\n", vowel);
    }
    return 0;
}