// Recursive function to perform inorder traversal on the tree
void Preorder(Node* root)
{
    // return if the current node is empty
    if (root == nullptr) {
        return;
    }
    // Display the data part of the root (or current node)
 
    cout << root->data << " ";
    // Traverse the left subtree
    Preorder(root->left);
 
    
    // Traverse the right subtree
    Preorder(root->right);
}
