class Solution 
{
    private int res = 0;
    int height(Node root)
    {
        if(root == null)
            return 0;
        else
        {
            
            int left = height(root.left);
            int right = height(root.right);
            int ans = left + right + 1;
            res = Math.max(res,ans);
            return 1+ Math.max(left,right);
        }
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node root)
    {
        res = 0;
        if(root == null)
            return 0;
        height(root);
        return res;
        // Your code here
    }
}
