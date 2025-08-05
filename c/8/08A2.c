#include<stdio.h>
int main(void)
{
    int i,END;
    
    printf("いくつまでの奇数を表示しますか：");
    scanf("%d",&END);
    
    for(i=1;i<=END;i+=2)
    {
        printf("%d ",i);
    }
    
    printf("\nfor文の繰り返し終了\n");
    return 0;
}