int height(struct Node* node)
{
    if(node == NULL)
        return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    if(lh > rh)
        return lh+1;
    else
        return rh+1;
}
