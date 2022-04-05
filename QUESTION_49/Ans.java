/*Given a row wise sorted matrix of size RxC where R and C
  are always odd,find median of the matrix. */

import java.util.*;

class MyClass
{
	public void Median(int Arr[][])
	{
		int n = r * c;
        int Arr[] = new int[n];
        int  k = 0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                Arr[k] = matrix[i][j];
                k++;
            }
        }
        
        Arrays.sort(Arr);
        int idx = n / 2;
        return Arr[idx];
    }
}

class Median_2D
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

		MyClass mobj = new MyClass();
		int iRet = mobj.Spiral(Arr);

	}
}
