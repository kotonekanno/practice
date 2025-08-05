#include<stdio.h>
int main(void)
{
    int yi,xi;
    
    for(yi=1;yi<=9;yi++)
    {
        if(yi==5) continue;
        
        printf("\n%dの段｜\t",yi);
        for(xi=1;xi<=9;xi++)
        {
            printf("%d×%d=%d\t",yi,xi,yi*xi);
        }
        printf("\n");
    }
    
    printf("\n\t\t\t==== かけ算　九九表====\n");
    return 0;
}