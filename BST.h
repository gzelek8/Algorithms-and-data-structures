//
// Created by peepe on 03.02.2020.
//

#ifndef AISD_BST_H
#define AISD_BST_H

#endif //AISD_BST_H


struct BST{
    int data;
    BST* left;
    BST* right;
    BST* parent;
}*root = nullptr;

void inorder(BST* root){
    if(!root){
        return;
    }
    if(root->left){
        inorder(root->left);
    }
    visit(root)
    if(root->right){
        inorder(root->right)
    }
}

BST* find(BST* root,int value){
    if(!root){
        return 0;
    }
    if(root->data == value){
        return root;
    }
    else if(root->data > value){
        find(root->left,value);
    }
    else{
        find(root->right,value);
    }
    return root;
}

BST* min(BST* root){
    if(!root){
        return 0;
    }
    while(root->left)
        root = root->left;
    return root;
}

BST* max(BST* root){
    if(!root){
        return 0;
    }
    while(root->right)
        root = root->right;
    return root;
}

BST* next(BST* x){
    if(root->right){ return min(root->right);}
    BST* y = x->parent;
    while (y && x == y->right){
        x = y;
        y = y->parent;
    }
    return y;
}

BST* prev(BST* x){
    if(root->left){ return max(root->left);}
    BST* y = x->parent;
    while (y && x == y->left){
        x = y;
        y = y->parent;
    }
    return y;
}

void insert(BST* root, BST* x){
    if(root == nullptr){
        root = x;
    }
    BST* par = nullptr;
    BST* son = root;
    while (son){
        par = son;
        if(par->data > x->data){
            son = par->left;
        } else{
            son = par->right;
        }
    }
    x->parent = par;
    if(par->data > x->data){
        par->left = x;
    } else{
        par->right = x;
    }
}

void remove(BST* root, BST* z){
    BST* y;
    if(z->left && z->right)
        y = next(z);
    else
        y = z;
    BST* x;
    if(y->left){
        x = y->left;
    }
    else{
        x = y->right;
    }
    if(x){
        x->parent = y->parent;
    }
    if(y->parent){
        if(y->parent->left){
            y->parent->left = x;
        }
        else{
            y->parent->right =x;
        }
    } else{
        root = x;
    }
    if(y!=z){
        z->data = y->data;
    }
    delete y;
}

