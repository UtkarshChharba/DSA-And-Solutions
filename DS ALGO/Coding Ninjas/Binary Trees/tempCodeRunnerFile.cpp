pair<int,int> max_and_min(Binary_Tree<int>*root){
    if(!root){
        return mp(-infinity,infinity);
    }
    int max1=root->data;
    int min1=root->data;
    pair<int,int> left=max_and_min(root->left);
    pair<int,int> right=max_and_min(root->right);
    max1=max3(left.ff,max1,right.ff);
    min1=min3(left.ss,right.ss,min1);
    return mp(max1,min1);
}