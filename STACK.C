#include<stdio.h>

 int stack[50],choice,n,top,x,i;
 void push(void);
 void pop(void);
 void display(void);
 int main()
 {
 clrscr();
 top=-1;
 printf("\n enter size of stack[max=50]");
 scanf("%d",&n);
 printf("\n stack operation ");
 printf("\n\t 1.push \t 2.pop\t 3.display\t 4.exit");
 do
 {
 printf("\n enter choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
   {
   push();
   break;
   }
case 2:
    {
    pop();
    break;
    }
 case 3:
     {
     display();
     break;
     }
 case 4:

 {
   printf("exit");
 break;
 }
 default :
 {
 printf("\n please enter valid choice");

 }
 }
}
while(choice!=4);
return 0;
}
 void push()
 {
 if(top>=n-1)
 {
 printf("\n stack is overflow");
 }
 else
 {
 printf("enter value");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 }
 }
 void pop()
 {
 if(top<=-1)
 {
 printf("stack undeflow");
 }
 else
 {
 printf("popped element %d",stack[top]);
 top--;
 }
 }
 void display()
 {
 if(top>=0)
 {
 printf(" \n element stack");
 for(i=top;i>=0;i--)

 printf("\n %d",stack[i]);
 printf("\n press next choice");
 }
 else
 {
 printf("stack is empty");
 }
 }
