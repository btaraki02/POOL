//#include <stdio.h>
#include <unistd.h>
int ft_fibonacci(int index)
{
 int a = 0;
 int b = 1;
 int son;
 int j = 0;
 if(index == 0)
 {
    return 0;
 }
 if(index < 0)
 {
    return - 1;
 }
 while(j < index)
 {
    son = a + b;
    a = b;
    b = son;
    j++;
 }
 return a;
}
/*int main()
{
   for(int i = 0;i < 10 ;i++)
   {
    printf("%d\n",ft_fibonacci(i));
   }
        
}*/