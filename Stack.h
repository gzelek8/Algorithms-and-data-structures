//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_STACK_H
#define AISD_STACK_H

#endif //AISD_STACK_H

using namespace std;

struct node {
    int data;
    node *next;
};

class Stack {
private:
    node *top;
public:
    Stack(){
        top = nullptr;
    }
    bool isEmpty(){
        return (!top);
    }
    void push(int value){
       node* tmp = new node;
       tmp->next = top;
       tmp->data = value;
       top = tmp;
    }
    void pop(){
        node* tmp = new node;
        if(isEmpty()){
            return;
        } else{
            tmp = top->next;
            delete top;
            top = tmp;

        }
    }
    void reverse(node* &top){
        node* tmp1 = new node;
        node* tmp2 = top;
        while(tmp2->next != nullptr){
            tmp1 = tmp2->next;
            tmp2->next = tmp1->next;
            tmp1->next = top;
            top = tmp1;
        }
    }

};