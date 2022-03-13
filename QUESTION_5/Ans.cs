// Move all the negative elements to one side of the array.
// In these case we used partitioning of an array 
using System;

class MyClass
{
	public void Move(int []Arr)
	{
		int j=0;
		while(j<Arr.Length)
		{
			if(Arr[j] < 0)
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if(j == Arr.Length)
		{
			return ;
		}
		int i = j+1;
		while(i<Arr.Length)
		{

			if(Arr[i] < 0)
			{
				int temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;
				i++;
				j++;
			}
			else
			{
				i++;
				
			}
		}
		
	}
}

namespace move_Negaives
{
	class Program
	{
		public static void Main(String []Arg)
		{
			int []Arr;
			int size = 0;
			Console.WriteLine("Enter the size");
			size = Convert.ToInt32(Console.ReadLine());
			Arr = new int[size];
			Console.WriteLine("Enter the Elements");
			for(int i=0;i<size;i++)
			{
				Arr[i] = Convert.ToInt32(Console.ReadLine());
			}

			MyClass mobj = new MyClass();
			mobj.Move(Arr);
			for(int i=0;i<Arr.Length;i++)
			{
				Console.Write(Arr[i]+" ");
			}
			Console.WriteLine();

		}
	}
}
