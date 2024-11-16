#include<stdio.h>
#include<string.h>
int main()
{
    char str[11];
    scanf("%[^\n]s",&str);
    printf("%c",str[6]);
}