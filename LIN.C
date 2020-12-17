#include<stdio.h>
#include<conio.h>
#include<alloc.h>
# define null 0


void insertbeg();
void insertmid();
void insertend();
void deletebeg();
void deleteend();
void deletemid();

void display();



struct node
{
int data;
struct node *link;
}*start=null;


void main()
{
int op,n,p;

clrscr();

do
{
printf("\n1:insertbeg 2:insertmid 3:insertend 4:deletebeg 5:deleteend 6:deletemid 7:display 8:exit");
scanf("%d",&op);

switch(op)

{
case  1:

      printf("enter the item ");
      scanf("%d",&n);
      insertbeg(n);
     break;


case 2:

      insertmid();
      break;

 case 3:

       printf("enter item");
       scanf("%d",&n);
    insertend(n);
       break;

case 4:

      deletebeg();
      break;

case 5:
      deleteend();
      break;

 case 6:

      deletemid();
     break;

 case 7:

       display();
       break;


 case 8:
       exit(0);
       break;
       }

       }while(op!=8);
       getch();
       }


   void insertbeg(int n)
   {
   struct node *t;
   t=(struct node*)malloc (sizeof (struct node));
    t->data=n;
    t->link=start;
    start=t;
    }



    void display()
    {
    struct node *ptr;
    for(ptr=start;ptr!=null;ptr=ptr->link)
     {

    printf("%d->",ptr->data);
    }

    }
  void insertend(int n)
{
struct node * ptr,*temp;
temp=(struct node *)malloc (sizeof(struct node))  ;
temp->data=n;
temp->link=null;
if(start==null)
{
start=temp;
}
else
{
ptr=start;
while(ptr->link!=null)

{
ptr=ptr->link;
}
ptr->link=temp;
}
}




void deletebeg() {
struct node * ptr;
ptr=start;
start=ptr->link;
printf("delete item is %d",ptr->data);
free(ptr);
}


 void deleteend()
{
struct node *ptr,*temp;
temp=start;
ptr=temp;
while(ptr->link!=null)
{
temp=ptr;
ptr=ptr->link;
}
temp->link=null;
printf("the delete item is %d",ptr->data);
free(ptr);
}



void deletemid()
{
int flag,i,loc;
struct node *ptr1,*ptr,*temp;
printf("enter the loction of item to be delete");
scanf("%d",&loc);
ptr=start;
for(i=0;i<loc;i++)
{
ptr1=ptr;
ptr=ptr->link;
if(ptr==NULL)
{
flag=1;
}
}
if(flag==1)
{
printf("can not delete");
}
else
{
ptr1->link=ptr->link;
printf("deleted element is %d",ptr->data);
free(ptr);
}
}



void insertmid()
{
int n,loc,i,flag=0;
struct node *ptr;
struct node *temp;
temp=(struct node*)malloc(sizeof (struct node));
printf("enter the number");
scanf("%d",&n);
temp->data=n;
printf("enter location");
scanf("%d",&loc);
ptr=start;
for(i=0;i<loc;i++)
{
ptr=ptr->link;
if(ptr==NULL)
{
flag=1;
}
}
if(flag==1)
{
printf("can not insert");
}
else
{
temp->link=ptr->link;
ptr->link=temp;
}
}



