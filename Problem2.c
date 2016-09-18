#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 2; int b = 3; int s = 0;
  
  while (a < 4000000){
    if (a % 2 == 0){ s += a;}
    if (b % 2 == 0){ s += b;}
    a = a + b;
    b = b + a;
  }
  
  printf("The sum is: %d\n", s);  //It should be 4613732 

return 0;
}
