class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int >vobj;
        if(root == NULL)
        {
            return vobj;
        }
       queue<Node*>q;
       q.push(root);
       while(q.empty()!=true)
       {
           int size = q.size();
           vobj.push_back(q.front()->data);
           while(size > 0)
           {
               Node *temp = q.front();
               q.pop();
               if(temp->right!=NULL)
               {
                   q.push(temp->right);
               }
               if(temp->left!=NULL)
               {
                   q.push(temp->left);
               }
               size--;
           }
       }
       
    }
};

