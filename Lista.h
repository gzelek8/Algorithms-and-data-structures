//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_LISTA_H
#define AISD_LISTA_H

#endif //AISD_LISTA_H

struct node{
    int data;
    node* next;
}*head = nullptr;

void addHead(node* &head, int value){
    node* tmp = new node;
    tmp->data = value;
    tmp->next = head;
    head = tmp;
}

void addAfter(node* p, int value){
    node* tmp = new node;
    tmp->data = value;
    tmp->next = p->next;
    p->next = tmp;
}

void addBefore(node* p, int value){
    node* tmp = new node;
    tmp->next = p->next;
    tmp->data = p->data;
    p->data = value;
    p->next = tmp;
}

void deleteAny(node* p){
    node* tmp = p->next;
    if(tmp != nullptr){
        p->next = tmp->next;
        p->data = tmp->data;
        delete tmp;
    }
}

void deleteAfter(node* p){
    node* tmp = p->next;
    if(tmp != nullptr){
        p->next = tmp->next;
        delete tmp;
    }
}

node* find(node* head, int value){
    node* tmp = new node;
    tmp = head;
    while(tmp != nullptr){
        if (tmp->data == value){return tmp;}
        else{tmp = tmp->next;}
    }
}
