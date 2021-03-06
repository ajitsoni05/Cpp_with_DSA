/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
/* Time complexity: O(N) Space complexity: O(H) where N is the number of nodes in the tree and H is the height/depth of the tree */
bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL)
    {
     return false;
    }
    if(root->data==x)
    {
        return true;
    }
    for(int i=0;i<root->children.size();i++)
    {
        bool small=isPresent(root->children[i],x);
       if(small==true)
       {
           return true;
       }
    }
    return false;
}
