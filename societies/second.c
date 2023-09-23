#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[50], str2[50];
    printf("Enter the first string: \n");
    gets(str1);
    printf("Enter the second string: \n");
    gets(str2);
    strcat(str1, str2);
    strrev(str1);
    printf("merged string in reverse order: %s", str1);
    return 0;
}