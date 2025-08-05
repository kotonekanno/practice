#include<stdio.h>
int main(void)
{
    int yi,xi;
    
    for(yi=1;yi<=5;yi++)
    {
        for(xi=1;xi<=6-yi;xi++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}