//#include <stdio.h>
#include <unistd.h>
int ft_fibonacci(int index)
{
 if(index == 0)
 {
    return 0;
 }
 if(index < 0)
 {
    return -1;
 }
   return ft_fibonacci( index - 1) + ft_fibonacci(index -2);
}
/*int main()
{
   for(int i = 0;i < 10 ;i++)
   {
    printf("%d\n",ft_fibonacci(i));
   }
        
}*/