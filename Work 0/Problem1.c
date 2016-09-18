#include <stdio.h>
#include <stdlib.h>

int main(){
  int t = 999; int f = 995; int sum = 0;
  while (t && f){
    sum += t;
    if (f % 3 != 0){
      sum += f;
    }
    t -= 3; f-= 5;
  }
  
  while (t){
    sum += t;
    t-= 3;
  }

  printf("The sum is %d.\n", sum);
  return 0;
}
