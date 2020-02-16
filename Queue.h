//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_QUEUE_H
#define AISD_QUEUE_H

#endif //AISD_QUEUE_H

struct node{
    int data;
    node* next;
};

class Queue{
private:
    node* rear;
    node* front;
public:
    Queue(){
        front = rear = nullptr;
    }
    bool isEmpty(){
        return (rear == nullptr && front == nullptr);
    }
    void enqueue(int value){
        node* tmp = new node;
        if(rear == nullptr){
            rear = new node;
            rear->next = nullptr;
            rear->data = value;
            front = rear;
        }
        else{
            rear->next = tmp;
            tmp->data = value;
            tmp->next = nullptr;
            rear = tmp;
        }
    }
    void dequeue(){
        node* tmp = front;
        if(isEmpty()){
            return;
        }
        else{
            if(tmp->next != nullptr){
                tmp = tmp->next;
                delete front;
                front = tmp;
            }
            else{
                delete front;
                front = rear = nullptr;
            }
        }
    }
};
