//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_BINARYTREE_H
#define AISD_BINARYTREE_H

#endif //AISD_BINARYTREE_H

struct node{
    int data;
    node* left;
    node* right;
}*root = nullptr;

void preorder(node* p){
    vist(p);
    preorder(p->left);
    preorder(p->right);
}

void inorder(node* p){
    inorder(p->left);
    visit(p);
    inorder(p->right);
}

void postorder(node* p){
    postorder(p->left);
    postorder(p->right);
    visit(p);
}

int getHeight(node* n){
    if(n == nullptr){
        return -1;
    }
    else{
        int lHeight = getHeight(n->left);
        int rHeight = getHeight(n->right);
        if( lHeight > rHeight){
            return (lHeight+1);
        } else{
            return (rHeight+1);
        }
    }

}