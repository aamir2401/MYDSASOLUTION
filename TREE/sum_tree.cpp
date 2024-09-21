pair <bool,int> issumTree(Node* root)
    {
        if(root == NULL)
        {
            pair <bool,int> p = make_pair(true,0);
            return p;
        }
        if(root -> left == NULL and root -> right == NULL)
        {
            pair <bool,int> p = make_pair(true,root -> data);
            return p;
        }
        
        pair<bool,int> leftAns = issumTree(root -> left);
        pair<bool,int> rightAns = issumTree(root -> right);
        
        
        bool pairleftPart = leftAns.first;
        bool  pairrightPart = rightAns.first;

     bool valCondtn = root -> data ==leftAns.second + rightAns.second;
     
     pair <bool,int> ans;
     if(pairleftPart and pairrightPart and valCondtn)
     {
         ans.first = true;
         ans.second = 2*root-> data;
     }
     else
     {
         ans.first = false;
     }
     return ans;
    }
    public:
    bool isSumTree(Node* root)
    {
        bool a= issumTree(root).first;
        return a;
    }
