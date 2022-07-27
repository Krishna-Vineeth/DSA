#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) {

  int max1=0,max2=0,max3=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          int x = i&j;
          if(x<k && x>max1)
          {
              max1=x;
          }
          
          int y = i|j;
          if(y<k && y>max2)
          {
              max2=y;
          }
          
          int z = i^j;
          if(z<k && z>max3)
          {
              max3=z;
          }
      }
  }
  printf("%d\n",max1);
          printf("%d\n",max2);
          printf("%d",max3);
          
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
