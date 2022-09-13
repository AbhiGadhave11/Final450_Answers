// Print Elements Using Reverse Level Order Traversal
vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    vector<int>v;
    int i = 1;
    while(q.empty()!=true)
    {
        Node *temp = q.front();
        q.pop();
        v.insert(v.begin(), temp->data);
        
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        i++;
        
    }
    return v;
}
