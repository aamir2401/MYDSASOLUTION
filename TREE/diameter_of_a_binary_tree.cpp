 int height (Node* root)
    {
        if(root == NULL)
        return 0;
        int left = height(root -> left);
        int right = height(root -> right);
        int ans = max(left,right)+1;
        return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
      if(root == NULL)
      return 0;
      int dOfleftsub = diameter(root -> left);
      int dOfrightsub = diameter(root -> right);
      int mixDofTree = height(root -> left) + height (root -> right) + 1;
      int finalAns = max(mixDofTree,max(dOfleftsub,dOfrightsub));
      return finalAns;
    }
};



 int height (Node* root)
    {
        if(root == NULL)
        return 0;
        int left = height(root -> left);
        int right = height(root -> right);
        int ans = max(left,right)+1;
        return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
      if(root == NULL)
      return 0;
      int dOfleftsub = diameter(root -> left);
      int dOfrightsub = diameter(root -> right);
      int mixDofTree = height(root -> left) + height (root -> right) + 1;
      int finalAns = max(mixDofTree,max(dOfleftsub,dOfrightsub));
      return finalAns;
    }
};