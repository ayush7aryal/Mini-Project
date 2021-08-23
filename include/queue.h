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
    Node *rear;


public:
 queue();
 bool isEmpty();
 void enqueue(int data);
 void dequeue();
 void front();
 void getRear();
 void printQueue();	
 void isFull();
};
