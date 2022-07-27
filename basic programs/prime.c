/*#include <stdio.h> 

main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("n is a Prime number");
  }
  else {
  printf("n is not a Prime number");
  }
  return 0;    
}*/
#include<stdio.h>
int main()
{
    int i,n,count,sum=0;
    printf("enter ending value:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        count=0;
        for(int j=1;j<=n;j++)
        {
        if(i%j==0)
        {
            count++;
        }
        }
        if(count==2 && n!=1)
        {
            printf("%d ",i);
            printf("\n");
            sum+=i;
        }
    }
    printf("sum = %d",sum);
    return 0;
}