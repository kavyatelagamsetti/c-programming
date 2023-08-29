//write a c programme to caluclate sum of two numbers if the user enters +,difference if the user enter-,if *product,qutient of two numbers/ symbol
#include<stdio.h>
int main() {
float num1,num2,sum,sub,pro,div;
char operator;
printf("enter number1:\n ");
scanf("%d",&num1);
printf("enter number2:\n ");

scanf("%d",&num2);
printf("enter the operand: ");
scanf("\n%c", & operator);
if(operator=='+') { 
sum=num1+num2;
printf("sum=%f",sum);
}
else if(operator=='-') {
sub=num1-num2;
printf("difference=%f",sub);
}

else if(operator=='*') {
pro=num1*num2;
printf("product=%f",pro);
}

else if(operator=='/') {
div=num1/num2;
printf("quotient=%f",div);
}
else {
printf("please enter valid input");
}
return 0;
}
