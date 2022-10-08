void enqueue()
{
  int new_item;//new element to be enqueued
  if(rear==MAX-1)
  {
    printf("Queue overflow\n");//if queue is already full
  }
  else
  {
    if(front==-1)
    front=0;	
    printf("Enter the number to be entered: ");
    scanf("%d",&new_item);
    rear+=1;//increment rear by 1
    queue[rear]=new_item;//adds new element at the rear
  }	
}
