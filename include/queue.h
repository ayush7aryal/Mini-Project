#pragma once


class Node
{
    public:
    int info;
    Node *next;
};
class queue
{
    private:
    // Node *front;
    Node *rear;


public:
queue();
virtual bool isEmpty();
virtual void enqueue(int data);
virtual void dequeue();
virtual void front();
virtual void getRear();
void printQueue();	
void isFull();
};
