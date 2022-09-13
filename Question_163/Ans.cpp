// Printing Elements using Level Order Traversal in Binary Search Tree

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      queue<Node *>q;
      vector<int>v;
      q.push(node);
      while(q.empty()!=true)
      {
          
          Node *temp = q.front();
          v.push_back(temp->data);
          q.pop();
          if(temp->left != NULL)
          {
              q.push(temp->left);
          }
          if(temp->right != NULL)
          {
              q.push(temp->right);
          }
      }
      return v;
    }
};
