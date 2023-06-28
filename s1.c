#include <math.h>
#include <stdio.h>
int main()
{
    int i, j, line=5;
    for( i=1; i<=line; i++ )
    {
        for( j=1; j<i; j++ )
        {
            printf( " " );
        }
        for( j=1; j<=line-i+1; j++ )
        {
            printf( "%d", j );
        }
        printf( "\n" );
    }

    return 0;
}
