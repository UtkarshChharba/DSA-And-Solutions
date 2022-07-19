template<typename T>
class Binary_Tree{
    public:
    T data;
    Binary_Tree<T>*left;
    Binary_Tree<T>*right;
    Binary_Tree(T a){
        data=a;
        left=NULL;
        right=NULL;

    }
    ~Binary_Tree(){
        delete left;
        delete right;
    }

};