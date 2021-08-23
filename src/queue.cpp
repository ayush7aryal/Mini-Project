#include<iostream>
#include "queue.h"
#define max 5
int check = 0;
queue::queue()
{
    rear =nullptr;
}

bool queue::isEmpty()
{
    return(rear==nullptr);
}

void queue::enqueue(int data)
{
    if(isEmpty())
    {
        Node *newNode = new Node;//Creating a new node and adding 
        newNode->info = data;
        newNode->next = newNode;
        rear=newNode;
        check++;
        std::cout<<data<<" has been enqueued"<<std::endl;
    }
    else
    {
        if(check<max)  //Checking if the code is full or not
        {
        Node *newNode = new Node;
        newNode->info = data;
        newNode->next = rear->next;
        rear->next= newNode;
        rear= newNode;
        check++;
        std::cout<<data<<" has been enqueued"<<std::endl;
        }
        else
        {
            std::cout<<" Cannot Enqueue as Max queue size exceeded"<<std::endl;
        }
    }
}
void queue::dequeue()
{
    if(isEmpty())
    {
        std::cout<<"Cannot Dequeue as the queue is empty"<<std::endl;
    }
    else
    {
        int temp = rear->next->info;
        if(rear->next==rear)  //If the queue has only one data
        {
            rear = nullptr;
            std::cout<<temp <<" has been dequeued"<<std::endl;
             check--;
            
        }
        else
        {
            rear->next = rear->next->next;                //if the queue has more than one data
            std::cout<<temp <<" has been dequeued"<<std::endl;
        }
        
         check--;

    }
}

 void queue::front()
 {
     if(isEmpty())
     {
         std::cout<<"The queue is empty"<<std::endl;
         
     }
     else
     {
         std::cout<<"The " <<rear->next->info<< " is the front data of queue"<<std::endl;
     }
 }

 void queue::getRear()
 {
     if(isEmpty())
     {
         std::cout<<"The queue is empty"<<std::endl;
         
     }
     else
     {
          std::cout<<"The " <<rear->info<< " is the rear data of queue"<<std::endl;
         
     }
 }

 void queue::printQueue()
 {
      if(isEmpty())
     {
         std::cout<<"The queue is empty"<<std::endl;
         
     }
     else
     {
     Node *temp = rear;
     std::cout<<"The datas in the queue are ";
     do
     {
         
         std::cout<<rear->next->info<<" ";
         rear = rear->next;     
     }
     while (rear!= temp );
     std::cout<<""<<std::endl;
     }
 }
 
 void queue::isFull()
 {
     if (check >= max)
     {
         std::cout<<"The queue is full"<<std::endl;
     }
     else
     {
         std::cout<<"The queue is not full"<<std::endl;
     }
 }

