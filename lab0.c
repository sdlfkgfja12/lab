#include <stdio.h>
 
int main()
{
int a,b,c,res;
printf("This is the programm to find difference between second and third number \n");
printf("Enter three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    res=b-c;
    
    printf("Result: %d", res);
 
    getchar();
    getchar();
    return 0;
}
