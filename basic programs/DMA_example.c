//9921004803 - krishna vineeth
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i, *p, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  p = (int*) malloc(n * sizeof(int));
//p = (int*) calloc(n , sizeof(int));
//p = (int*) realloc(p , 30); 
  printf("Enter elements: ");
  for(i = 0; i < n; ++i) 
  {
    scanf("%d", p + i);
    sum += *(p + i);
  }

  printf("Sum = %d", sum);
  
  // deallocating the memory
  free(p);

  return 0;
}