#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int s[25]={0};
int top=-1;
int ch;
void push(int ele)
{
top++;
s[top]=ele;
}
int pop(){
ch=s[top];
top--;
return ch;
}
void evaluatePostfixExp(char postfix[]){
char ele;
int k,i,num1,num2,ans;
i=0;
while(i<strlen(postfix)) {
ele=postfix[i];
if(isdigit(ele))
{
push(ele-'0');
}
else
{
num1=pop();
num2=pop();
switch(ele)
{
case '^':
ans=pow(num2,num1);
break;
case '*':
ans=num2*num1;
break;
case '-':
ans=num2-num1;
break;
case '/':
ans=num2/num1;
break;
case '+':
ans=num2+num1;
break;
}
push(ans);
}
i++;
}
printf("\n Result after evaluation :- %d",pop());
}
int main()
{
char str[20]={'\0'};
printf("\n Enter the Postfix Expression :- ");
scanf("%s",str);
evaluatePostfixExp(str);
return 0;
}