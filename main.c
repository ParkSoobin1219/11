#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
   int i;
   int grade[5];
   int sum=0;
   int *ptr=grade;
   
   for(i=0;i<5;i++){
      printf("input value (%i) : ", i);
      scanf("%d", &grade[i]);
   }
   
   for(i=0;i<5;i++)
   {
       printf("grade[%i]=%d\n", i, *(ptr+i)); 
      sum=sum+*(ptr+i);
   }
   
   printf("average : %d", sum/5);
   return 0;
}
