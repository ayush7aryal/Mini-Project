#include<iostream>
#include "queue.h"


int main()
{

    queue q;
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(67);
    q.enqueue(99);
    q.printQueue();
    q.dequeue();

    q.front();
    q.getRear();
    q.printQueue();

     q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.isFull();
    q.printQueue();
    q.dequeue();
    q.dequeue();
    q.printQueue();
    q.enqueue(8);
    q.enqueue(9);
q.enqueue(10);
q.enqueue(10);
q.printQueue();
q.front();
q.getRear();
q.dequeue();
q.dequeue();
q.printQueue();



}