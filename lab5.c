#include <stdio.h>

int main(void)
{
    int num[10]={1,1,2,3,4,4,4,4};
    int sum=0;

    for(int i=0; i<10; i++)
    {
        if(num[i]==2)
            { 
                sum += 1;
            }
   
     }

     printf("%d\n",sum);

    return 0;

}