    Binary_Tree<int>*root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    void deltedata(int data){
        deletedata(data,root);
    }
    Binary_Tree<int>* insert(int data){
        root=insert(root,data);
    }
    private:
    Binary_Tree<int>* deletedata(int data,Binary_Tree<int>*root){
        if(!root){
            return NULL;
        }
        if(data>root->data){
             root->right=deletedata(data,root->right);
        }
        if(data<root->data){
            root->left=delete(data,root->right);
        }
        else{
            if(root->left==NULL And root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left==NULL){
                Binary_Tree<int>*temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            if(root->right==NULL){
                Binary_Tree<int>*temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
            else{
                Binary_Tree<int>*min_node=root->right;
                while(min_node->left!=NULL){
                    min_node=min_node->left;
                }
                int rightmin=min_node->data;
                root->data=rightmin;
               root->right=deletedata(rightmin,root->right);
                return root;
            }
        }

          
    }

    int minimum(Binary_Tree<int>*root){
        if(!root){
            return INT_MAX;
        }
        return min3(root->data,minimum(root->left),minimum(root->right));
    }
    int maximum(Binary_Tree<int>*root){
        if(!root){
            return INT_MIN;
        }
        return max3(root->data,maximum(root->right),maximum(root->left));
    }
    bool has_data(int data,Binary_Tree<int>*root){
        if(!root){
            return false;
        }
        if(root->data==data){
            return true;
        }

        else if(has_data(data,root->left)){
            return true;
        }
        else if(has_data(data,root->right)){
            return true;
        }
    }
    Binary_Tree<int>* insert(Binary_Tree<int>*root,int data){
        if(!root){
            root=new Binary_Tree<int>(data);
            return root;
        }
        if(root->data<=data){
            root->right=insert(root->right,data);
            return root;
        }
        else{
            root->left=insert(root->left,data);
            return root;
        }
    }
    public:
    bool has_data(int data){
        return has_data(data,root);
    }
