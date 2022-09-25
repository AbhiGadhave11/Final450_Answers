class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
         vector<int>ans;
      vector<int> rows;
      if(root == NULL) 
      {
          return ans;
      }
      
      bool level = true;
      queue<Node*>q;
      q.push(root);
    
      while(q.size() != 0) 
      {
          int size = q.size();
          while(size-- != 0) 
          {
              Node *temp = q.front();
                q.pop();
             rows.push_back(temp->data);
              
              if(temp->left != NULL) 
              {
                  q.push(temp->left);
              }
              if(temp->right != NULL) 
              {
                  q.push(temp->right);
              }
              
            
              
          }
          
          if(level==true)
          {
             for(auto i=rows.begin(); i!=rows.end(); i++)
             {
                ans.push_back(*i);
             }
            level = false;
          }
          else
          {
                
                reverse(rows.begin(), rows.end());
                for(auto i=rows.begin(); i!=rows.end(); i++)
                {
                  ans.push_back(*i);
                }
                level = true; 
            }
            rows.clear();
              
        }
      return ans;
     
    }
};
