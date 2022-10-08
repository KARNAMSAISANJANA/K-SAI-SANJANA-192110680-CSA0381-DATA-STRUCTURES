void display()
{
  if(front==-1)
  {
    printf("\nQueue is empty\n");
  }
  else
  {	
    printf("\nThe queue is:\n");
    for (int i=front;i<=rear;i++)
    {
      printf("%d ",queue[i]);//prints the queue elements from front to rear
    }
    printf("\n");
  }
}
