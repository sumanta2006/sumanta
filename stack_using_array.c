/* Stack (using array)*/
#include<stdio.h>
#define n 10 //size of the stack
int a[n];//global declaration of array
int Top=-1;//global declaration of Top
int push(int item)
{
  if (Top==n-1) //stack overflow condition
  {
  printf("\n stack is full:");
  }
  else
  {
  Top++;
  a[Top]=item;
  }
  return 0;
}
int pop()
{
 if (Top==-1)
 {
 printf("\n stack is empty:");
 }
 else
 {
 printf("\n the deleted element is :%d",a[Top]);
 Top--;
 }
 return 0;
}
int display()
{
   int i; 
 if (Top==-1) //stack underflow condition
 {
 printf("\n stack is empty:");
 }
 else
 {
 printf("\n stack elements are :");
 for (int i=Top;i>=0;i--)
 {
 printf("%d ",a[i]);
 }
 }
 return 0;
}
int main()
{
int choice,item;
while (1)
{
 printf("\n 1:push 2:pop 3:display 4:exit");
 printf("\n enter your choice:");
 scanf("%d",&choice);
 switch (choice)
 {
  case 1:
  printf("\n enter the data to insert:");
  scanf("%d",&item);
 push(item);
 break;
 case 2: pop();
 break;
 case 3: display();
 break;
 case 4: exit(1);
 } //end of switch
 } //end of while
 return 0;
}
