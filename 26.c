/*A
  B  C
  D  E  F
  G  H  I  J
  K  L  M  N  O*/


#include <stdio.h>

int main()
{
    int a;
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  %c",'A'+a++);
        }
        printf("\n");
    }
    
}