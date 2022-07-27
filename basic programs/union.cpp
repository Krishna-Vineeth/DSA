//9921004803 - krishna vineeth
#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} s;

int main() {
   s.salary = 12.3;
   s.workerNo = 100;

   printf("\nin union the previous values are over written by the next values\n\n\n");
   printf("Salary = %.1f\n", s.salary);
   printf("Number of workers = %d", s.workerNo);

   return 0;
}