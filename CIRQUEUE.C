#include<stdio.h>
#include<conio.h>
#define size 10
int cq[size];
void insert();
void delete();
void display();
int front,rear;
void main()
{


int opt;

front=rear=-1;

clrscr();

do
{
printf("1.insert\n2.delete\n3.display\n4.exit");

printf("enter your option");

scanf("%d",&opt);

switch(opt)
{

case 1:
     insert();
     break;

case 2:
     delete();
     break;

case 3:
      display();
      break;
  case 4:
     exit(0);

     default:
	   printf("\n invalid option\n");
	   }
	   }while(opt!=4);
	   getch();
	   }



    void insert()
    {
    int no;
    if(front==(rear+1)%size)
    {
    printf("circular queue is full");
    }

else
{
if(rear==-1)
{
rear=front=0;
}
else
{
rear=(rear+1)%size;
}
printf("enter element");

scanf("%d",&no);


cq[rear]=no;

printf("element inserted");



}
}

void delete()
{

if(front==-1)

{

printf("circular queue is empty");
}
else
{
printf("deleted elements is %d \n",cq[front]);


if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%size;
}
}}
 void display()
 {
 int i;

 if(front==-1)
 {
 printf("circular queue is empty");
 }
 else
 {
 printf("elements  in circular queue \n");
 if(front<=rear)
 {
 for(i=front;i<=rear;i++)
 {
 printf("%d",cq[i]);
 printf("\t");
 }
 }
 else
 {
 for(i=front;i<=size;i++)

 printf("%d",cq[i]);
 for(i=0;i<=rear;i++)
 printf("%d",cq[i]);
 }
 }
 }
