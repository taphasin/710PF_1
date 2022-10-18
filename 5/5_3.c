#include <stdio.h>

int fac(int c)  
{  
  if (c == 0)  
    return 1;  
  else  
    return(c * fac(c-1));  
}  

int main()
{
    int a, result;
    printf("input num : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("negative alert");
        return 0;
    }
    result = fac(a);
    printf("factorial is : %d", result);
    return 0;
}