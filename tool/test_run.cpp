#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data){
        this->data = data;
        left = right = NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
class completeBT
{
private:
    BinaryTreeNode<int> *root;
    queue<BinaryTreeNode<int> *> q;

public:
    completeBT()
    {
        root = NULL;
    }

private:
    BinaryTreeNode<int> *insertHelper(BinaryTreeNode<int> *node, int data)
    {
        BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
        if (node == NULL)
        {
            q.push(newNode);
            return newNode;
        }
        else
        {
            for (int i = 0; i < q.size(); i++)
            {

                BinaryTreeNode<int> *front = q.front();

                if (!front->left)
                {
                    front->left = newNode;
                    q.push(newNode);
                    break;
                }
                else if (!front->right)
                {
                    front->right = newNode;
                    q.push(newNode);
                }
                else
                    q.pop();
            }
        }
        return node;
    }
BinaryTreeNode<int>* delete_helper(BinaryTreeNode<int>*root,int data){
    if(!root){
        return NULL;
    }
    if(root->data==data){
        if(!(root->left) && !(root->right)){
            delete root;
            return NULL;
        }
        if(!root->left){
            BinaryTreeNode<int>*right=root->right;
            root->right=NULL;
            delete root;
            return right;
        }
        if(!root->right){
            BinaryTreeNode<int>*left=root->left;
            root->left=NULL;
            delete root;
            return left;
        }
        else{
        queue<BinaryTreeNode<int>*> pending_nodes;
        pending_nodes.push(root);
        BinaryTreeNode<int>*front=pending_nodes.front();
        while(pending_nodes.size()){
            front=pending_nodes.front();
            pending_nodes.pop();
            if(front->left){
                pending_nodes.push(front->left);
            }
            if(front->right){
                pending_nodes.push(front->right);
            }
        }
        root->data=front->data;
        root->left=delete_helper(root->left,root->data);
        root->right=delete_helper(root->right,root->data);
        return root;
    }
    }
    root->left=delete_helper(root->left,data);
    root->right=delete_helper(root->right,data);
    return root;
}  
void levelOrderPrint(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> pendingNodes;
    cout << root->data << endl;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    while (!pendingNodes.empty())
    {

        // last null hoga toh yeh karenge taaki extra line add na ho
        if (pendingNodes.size() == 1 && pendingNodes.front() == NULL)
            break;

        // use null as a check to end a level
        if (pendingNodes.front() == NULL)
        {
            pendingNodes.push(NULL);
            cout << endl;
            pendingNodes.pop();
        }

        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        if (front->left)
        {
            pendingNodes.push(front->left);
            cout << front->left->data << " ";
        }
        if (front->right)
        {
            pendingNodes.push(front->right);
            cout << front->right->data << " ";
        }
    }
}

public:
void insert(int data)
{
    root = insertHelper(root, data);
}
void Delete(int data)
{
    root = delete_helper(root, data);
}
void print()
{
    levelOrderPrint(root);
}
};

int main()
{
    completeBT b;
    b.insert(1);
    b.insert(2);
    b.insert(3);
    b.insert(4);
    b.insert(5);
    b.print();
}
