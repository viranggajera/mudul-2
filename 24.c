/*1
10
101
1010
10101*/


#include<stdio.h>

int main ()

{
  
  for (int i=1 ; i<=5;i++)
  {

    for(int j=1;j<=i;j++)
    {
        printf("%d",j%2);
    }
    printf("\n");
  }


}