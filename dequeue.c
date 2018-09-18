#include<stdio.h>
#include<conio.h>
void main()
{
  int n,queue[100],ch=1,front=0,rear=0,i,j=1;
  clrscr();
  printf("enter the size of queue:\n");
  scanf("%d",&n);
  printf("Queue using array");
  printf("\n1.dequeue \n2.display \n3.exit");
  while(ch)
  {
    printf("\n enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case1:
        if(front==rear)
          printf("\n Queue is empty");
    }
    else
    {
      printf("deleted element id %d",queue[front++1]);
      n++;
    }
    break;
    case 2:
    printf("\n Queue elements are:\n");
    if(front==rear)
    {
      printf("queue is empty");
    }
    else
    {
      for(i=front;i<rear;i++)
      {
        printf("%d",queue[i]);
        printf("\n");
      }
      break;
      case 3:
      exit(0);
      break;
      default:
      printf("enter correct choice");
    }
  }
}
      
                                         
