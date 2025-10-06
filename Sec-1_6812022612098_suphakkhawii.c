#include <stdio.h> 
 
int main() { 
  int i[2],b;
  float ia;
    printf("Enter number of OT days (1-10): ");
     scanf("%d" , &i);
  for (int i = 1; i <= 10; i++)
  {
   if (i == 10) {
   break;
   }
   printf("Enter number of  Day 1: ");
   scanf("%f" , &i);
printf("Enter number of  Day 3: ");
  scanf("%f" , &i);
  printf("Enter lncome Level(L,M,H): ");
  scanf("%s" , &i);
    }
      return 0; 
  }

  