#include <stdio.h>
int main() {
     int array[6] = {10, 20, 30, 40, 50, 60};
     int i;
     
     printf("Elements of thr array are:\n");
     
     for(i = 0; i < 6; i++) {
      printf("array[%d] = %d\n", i, array[i]);
     }
     return 0;
}
