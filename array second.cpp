#include <stdio.h>
int main (){
    int array[7] = {20, 21, 22, 23, 24, 25, 26};
    int *ptr;
    int i;
    
    ptr = array; 
    printf("Accessing array elements using pointers:\n");
    for(i = 0; i < 5; i++)
    {
    
     printf("Element %d = %d\n", i, *(ptr + i));
   }  
   
   return 0;
}

