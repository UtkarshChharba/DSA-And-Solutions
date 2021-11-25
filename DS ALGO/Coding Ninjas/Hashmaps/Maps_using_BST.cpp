#include <bits/stdc++.h>
#include "Binary_Tree_class.h"
using namespace std;
template<typename T,typename P>
class BST{
    Binary_Tree<T,P>*root;
    public:
    BST(){
        root=NULL;
    }
    void insert(T key,P value){
        root=insert(key,value,root);
    }
    P isdata(T key){
        root=isdata(key,root);
    }
    void delete_data(T key){
        root=delete_data(key,root);
    }
    private:
    Binary_Tree<T,P>* insert(T key,P value,Binary_Tree<T,P>*root){
        if(!root){
            Binary_Tree<T,P>*temp=new Binary_Tree<T,P>(key,value);
            return temp;
        }
        if(root->key<=key){
            root->right=insert(key,value,root->right);
            return root;
        }

        root->left=insert(ket,value,root->left);
        return root;

    }
    P isdata(T key,Binary_Tree<T,P>*root){
        if(!root){
            p temp;
            return temp;
        }
        if(root->key==key){
            return root->value;
        }
        if(root->key>key){
            return isdata(key,root->left);
        }
        return isdata(ket,root->right);
    }
    Binary_Tree<P,T>* delete_data(T key,Binary_Tree<P,T>*root){
        if(!root){
            return NULL;
        }
        if(root->key>key){
            root->left=delete_data(key,root->left);
            return root;
        }
        if(root->data<key){
            root->right=delete_data(key,root->right);
            return root;
        }
        if(root->key==key){
            if(!root->right And !root->left){
                delete root;
                root=NULL;
                return root;
            }
            if(!root->right){
                Binary_Tree<T,P> temp=root->left;
                root->left=NULL;
                delete root;
                root=temp;
                return root;
            }
            if(!root->left){
                Binary_Tree<T,P> temp=root->right;
                root->right=NULL;
                delete root;
                root=temp;
                return root;
            }
            Binary_Tree<T,P> min_node=root->right;
            while(min_node->left){
                min_node=min_node->left;
            }
            root->key=min_node->key;
            root->value=min_node->value;
            root->right=delete_data(min_node->key,root->right);
            return root;
        }
    }

    

};