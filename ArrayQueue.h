//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_ARRAYQUEUE_H
#define AISD_ARRAYQUEUE_H

#endif //AISD_ARRAYQUEUE_H

using namespace std;

class ArrayQueue{
private:
    int size,capacity,front,rear;
    int* queue = nullptr;
public:
    ArrayQueue(int n = 50){
        this->size = 0;
        this->rear = -1;
        this->front = 0;
        this->capacity = n;
        this->queue = new int[capacity];
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == capacity);
    }
    void enqueue(int value){
        if(isFull()){
            return;
        }
        rear = (rear+1)%capacity;
        queue[rear] = value;
        ++size;
    }
    void dequeue(){
        if(isEmpty()){
            front = (front+1)%capacity;
            --size;
        }
    }
    void reverse(queue<int>& Queue){
        stack<int> Stack;
        while(!Queue.isEmpty()){
            Stack.push(Queue.front());
            Queue.pop();
        }
        while(!Stack.empty()){
            Queue.push(Stack.top());
            Stack.pop();
        }
    }
};