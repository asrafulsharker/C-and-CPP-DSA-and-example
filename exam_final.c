#include <stdio.h>
#include <stdlib.h>
int main( )
{
    char s[ ]="spl is an interesting course.";

    for (int i = 0; s[i]!='\0' ; i++)
    {
        if(s[i] == 'i')
            s[i] = s[i] - 32;
        else if(s[i] == 'n')
            s[i] = s[i] - 32;
        else if(s[i] > 'A' && s[i] < 'Z')
            s[i] = s[i] + 32;

        printf("%c",s[i]);

    }

    return 0;
}
