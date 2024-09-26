#include <stdio.h>
int main ()
{
    int x=10;
    do{
        x=x+2;
        printf("%d",x);
        x++;
    }
    while(x<=50);
    return 0;
}