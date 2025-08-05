#include<stdio.h>
int main(void)
{
    int i,END;
    
    printf("いくつまで表示しますか：");
    scanf("%d",&END);
    
    for(i=1;i<=END;i++)
    {
        if(i%3==0)
            if(i%5==0) printf("FizzBuzz ");
            else printf("Fizz ");
        else
            if(i%5==0) printf("Buzz ");
        	else printf("%d ",i);
    }
    
    printf("\nfor文の繰り返し終了\n");
    return 0;
}