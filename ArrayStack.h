//
// Created by peepe on 03.02.2020.
//

#include <stack>

#ifndef AISD_ARRAYSTACK_H
#define AISD_ARRAYSTACK_H

#endif //AISD_ARRAYSTACK_H



class ArrayStack{
private:
    int top, capacity;
    int* stos = nullptr;
public:
    ArrayStack(int size = 50){
        this->capacity = size;
        this->top = -1;
        this->stos = new int[capacity];
    }
    bool isEmpty(){
        return (top == -1);
    }
    bool isFull(){
        return (top == capacity-1);
    }
    void push(int value){
        if(isFull()){
            return;
        }
        else{
            stos[++top] = value;
        }
    }
    void pop(){
        if(isEmpty()){
            return;
        }
        else{
            int value = stos[top--];
        }
    }
    void reverse(){
        std::stack<int> Stack;
        for(int i = 0;i<stos.size();i++){
            Stack.push(stos.top());
            stos.pop()
        }

    }
};