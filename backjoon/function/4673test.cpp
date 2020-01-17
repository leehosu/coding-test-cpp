#include<stdio.h>
 int main()
  {
          int A = 1;
          int D = 4;
          int n = A;
          int i = 2;
          int An = 0;
          int count;
          while(1)
          {      
                  An = A+(i-1)*D;
                  n = n +An;
                  i = i + 1;
                  count++;
                  if(An>=210) break;
          }      
          printf("등차수열 합 : %d\n",count);
 }    
