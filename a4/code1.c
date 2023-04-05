#include <stdio.h>

int main()
{
//    int i=6;
//    if ( i<= 6 )
//        printf("hello\n");;
//    else
//        printf("bye-bye\n");;

    int i,x,y;
    i=x=y=0;
    do {
        ++i;
        if ( i%2 )
            x+=i,
                    i++;
        y +=i++;
    } while ( i<=7 );
    printf("%d %d %d", i, x, y);
}