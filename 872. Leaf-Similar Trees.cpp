class Solution {
public:
    void getLeaf(TreeNode* head,vector<int>& t)
    {
        if(head==NULL)
            return;
        
        if(head->left==NULL and head->right==NULL)
            t.push_back(head->val);
        
        getLeaf(head->left,t);
        getLeaf(head->right,t);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> lf1, lf2;
        getLeaf(root1,lf1);
        getLeaf(root2,lf2);
        
        if(lf1.size()!=lf2.size())
            return false;
        else
        {
            for(int i=0;i<lf1.size();i++)
            {
                if(lf1[i]!=lf2[i])
                    return false;
            }
        }
        
        return true;
    }
};