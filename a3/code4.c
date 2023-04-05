#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for ( int i = 1; i<=n;i++) {
        if ( i%2 && n-i>1) {
            printf("%d ",i);
        } else if(i%2){
            printf("%d",i);
        }
    }
    return 0;
}