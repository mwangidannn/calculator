#include <stdio.h>

int main() {

char operator;
printf("Enter the operator['*','+','-','/']");
scanf("%c",&operator);

double num1,num2;

printf("Enter the first number");
scanf("%lf",&num1);

printf("Ënter the second number");
scanf("%lf",&num2);

double results;
switch(operator){

case '*':
results = num1 * num2;
break;

case '/':
results = num1 / num2;
break;

case '-':
results = num1 - num2;
break;

case '+':
results = num1 + num2;
break;

default :
printf("Ïnvalid operator");

}
printf("%.2lf",results);
return 0;
};
