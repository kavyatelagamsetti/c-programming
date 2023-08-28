#include<stdio.h>
int main() {
int exam1,exam2,exam3;
printf("enter exam1 marks: ");
scanf("%d",&exam1);
printf("enter exam2 marks: ");
printf("enter exam3 marks: ");
scanf("%d",&exam3);
int average=(exam1+exam2+exam3)/3;
printf("average=%d" average);
if(average>85) {
printf("High Acheiver");
}
if(average>=70 && average<=85) {
printf("Pass");
}
else {
printf("Need Improvement");
}
   return 0;
}


