void dequeue()
{
  if(front==-1||front>rear)
    printf("Queue underflow\n");//if queue is empty
  for(int i=front;i<=rear;i++)
  {
    queue[i]=queue[i+1];
  }//removes an element from the front 
  rear-=1;//decrement rear by 1
}
