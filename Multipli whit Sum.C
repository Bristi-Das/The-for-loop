#include<stdio.h>
int main( )
{
    int n,term=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        term=term+n;
         printf("%d*%d=%d\n",n,i,term);
    }

    return 0;
}
