#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100],sen[100],ch;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen); 

    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}

