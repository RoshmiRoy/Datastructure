#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,j,array1[20],array2[20],array3[20],k=0;
clrscr();



 printf("\n enter size of array array1:");
 scanf("%d",&m);
 printf("\n enter sorted elements of array1 ");
 for(i=0;i<m;i++)
 {
 scanf("%d",&array1[i]);
 }
 printf("\n enter the size of array2:");
 scanf("%d",&n);
 printf("\n enter sorted elements of array2:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&array2[i]);
 }
 i=0;
 j=0;
 while(i<m && j<n)
 {
 if(array1[i]<array2[j])
 {
 array3[k]=array1[i];
 i++;
 }
 else
 {
 array3[k]=array2[j];
 j++;
 }
 k++;
 }
 if(j>=n)
 {
 while(i<m)
 {
 array3[k]=array1[i];
 i++;
 k++;
   }
}
while(j<n)
{
array3[k]=array2[j];

j++;

k++;
}






printf("merged array:");



for(i=0;i<m+n;i++)


{

printf("%d",array3[i]);

}

getch();
}