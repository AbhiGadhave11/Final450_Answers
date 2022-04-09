/*Given a square matrix of size N x N. The task is to 
rotate it by 90 degrees in anti-clockwise direction 
without using any extra space 
*/

import java.util.*;

class MyClass
{
	static void rotateby90(int Arr[][], int n) 
    { 
        for(int i=0;i<n;i++)
        {
            int li = 0;
            int ri = n-1;
            while(li<ri)
            {
                int temp = Arr[i][li];
                Arr[i][li] = Arr[i][ri];
                Arr[i][ri] = temp;
                
                li++;
                ri--;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = temp;
            }
        }
        
    }
}

class Rotate_Matrix_By_90
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int Arr[][];
		System.out.println("Enter the Rows : ");
		int row = sobj.nextInt();
		System.out.println("Enter the Columns : ");
		int col = sobj.nextInt();
		Arr = new int[row][col];
		System.out.println("Enter the Elements : ");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}

		System.out.println("Entered Elements are : ");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println("Spiral Traversal of Matrix : ");
		MyClass mobj = new MyClass();
		mobj.rotateby90(Arr);
		System.out.println();
	}
}
