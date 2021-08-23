#include<iostream>
#include "queue.h"


int main()
{
    char opt;
    int data;
    bool check = true;
    queue x;
    std::cout<<"\n\t*********What do you want to operate in the Queue********"<<std::endl;

    std::cout<<"\t1. CHeck if the queue is empty"<<std::endl;
    std::cout<<"\t2. Add a data to the Queue(Operate enqueue)"<<std::endl;
    std::cout<<"\t3. Remove the data from the queue(Operate Dequeue)"<<std::endl;
    std::cout<<"\t4. Get the front element of the Queue"<<std::endl;
    std::cout<<"\t5. Get the rear element of the Queue"<<std::endl;
    std::cout<<"\t6. Check if  the queue is full"<<std::endl;
    std::cout<<"\t7. Print all the elements in the queue"<<std::endl;
    std::cout<<"\t8. Terminate the program"<<std::endl;

    // std::cout<<"6. Check if  the queue is full"<<std::endl;
while(check )
{
    std::cout<<"Your option:"<<std::endl;
    std::cin>>opt;


    switch (opt)
    {
    case '1':
        if(x.isEmpty())
        {
            std::cout<<"The queue is empty"<<std::endl;
            
            break;
           
        }
        else
        {
            std::cout<<"The queue is not empty"<<std::endl;
            
            break;
        }
        
    case '2':
         std::cout<<"Enter the data you want to add in the queue"<<std::endl;
         std::cin>> data;
         x.enqueue(data);
         
         break;
         

    case '3':
        x.dequeue();
        
        break;

    case '4':
        x.front();
        
        break;

    case '5':
        x.getRear();
        
        break;

    case '6':
        x.isFull();
        
        break;

    case '7':
        x.printQueue();
        
        break;

    case '8':
        check =false;
        std::cout<<"The program has been terminated"<<std::endl;
        break;
    
    default:
        std::cout<<"Your option is not valid "<<std::endl;
        //  check = false;
        break;
    }    
    }









//     queue q;
    
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(67);
//     q.enqueue(99);
//     q.printQueue();
//     q.dequeue();

//     q.front();
//     q.getRear();
//     q.printQueue();

//     q.enqueue(4);
//     q.enqueue(5);
//     q.enqueue(6);
//     q.enqueue(7);
//     q.isFull();
//     q.printQueue();
//     q.dequeue();
//     q.dequeue();
//     q.printQueue();
//     q.enqueue(8);
//     q.enqueue(9);
// q.enqueue(10);
// q.enqueue(10);
// q.printQueue();
// q.front();
// q.getRear();
// q.dequeue();
// q.dequeue();
// q.printQueue();



}