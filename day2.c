#include<stdio.h>
int main(){

  float ts,tax,tip,total,me,frnd1,frnd2;
  printf("enter the total bill amount:");
  scanf("%f",&ts);
  
  tax=ts*0.05;
   tip=ts*0.1;

  total=ts+tip+tax;

   printf("each person has to pay as follows:\n");

  me =total/2;
   printf("me=%f\n",me);
 
  frnd1=total/2;
    printf("frnd1=%f\n",frnd1);

  //as frnd 2 forgets his wallet 
  frnd2=0;
    printf("frnd2=%f\n",frnd2);

     return 0;

}






