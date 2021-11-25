template<typename T,typename P>
class Binary_Tree{
    public:
    T key;
    P value;
    Binary_Tree<T,P>*left;
    Binary_Tree<T,P>*right;
    Binary_Tree(T a,P b){
        key=a;
        value=b;
        left=NULL;
        right=NULL;
    }
    ~Binary_Tree(){
        delete left;
        delete right;
    }

};