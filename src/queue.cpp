
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
    // std::cout<<"Thw queueeeeeeeeeeeeeee is empty"<<std::endl;
    return(rear==nullptr);
    

}

void queue::enqueue(int data)
{
    if(isEmpty())
    {
        Node *newNode = new Node;
        newNode->info = data;
        newNode->next = newNode;
        rear=newNode;
        check++;
        std::cout<<"Check is"<<check<<std::endl;
    }
    else
    {
        if(check<max)
        {
        Node *newNode = new Node;
        newNode->info = data;
        newNode->next = rear->next;
        rear->next= newNode;
        rear= newNode;
        check++;
        std::cout<<"Check is"<<check<<std::endl;
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
        // delete rear->next;
        if(rear->next==rear)  //If the queue has only one data
        {
            rear = nullptr;
             check--;
        }
        else
        {
            rear->next = rear->next->next;
        }
        std::cout<<temp <<"has been dequeued"<<std::endl;
         check--;
        std::cout<<"Check is"<<check<<std::endl;

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
     Node *temp = rear;
     do
     {
         
         std::cout<<rear->next->info<<","<<std::endl;
         rear = rear->next;     
     }
     while (rear!= temp );
 }
 
 void queue::isFull()
 {
     if (check >= max)
     {
         std::cout<<"The queue is fulll"<<std::endl;
     }
     else
     {
         std::cout<<"The queue is not full"<<std::endl;
     }
 }
