// Given an array which consists of 0,1,2 . Sort the array without using any sorting algorithm
// For This Question we used Hashmap and can be solved without using any sorting algorithm

import java.util.*;
class Myclass
{
	void Sort(int Arr[])
	{
		HashMap<Integer,Integer>hobj = new HashMap<>();
		for(int i=0;i<Arr.length;i++)
		{
			if(hobj.containsKey(Arr[i]))
			{
				int no = hobj.get(Arr[i]);
				no++;
				hobj.put(Arr[i],no);
			}
			else
			{
				hobj.put(Arr[i],1);
			}
		}
		int count[] = new int[3];
		for(Integer a : hobj.keySet())
		{
			if(a == 0)
			{
				count[0] = hobj.get(a);
			}
			else if(a == 1)
			{
				count[1] = hobj.get(a);
			}
			else
			{
				count[2] = hobj.get(a);
			}
		}
		int i = 0;
		while(count[0]>0)
		{
			Arr[i] = 0;
			i++;
			count[0]--;
		}
		while(count[1]>0)
		{
			Arr[i] = 1;
			i++;
			count[1]--;
		}
		while(count[2]>0)
		{
			Arr[i] = 2;
			i++;
			count[2]--;
		}
	}
}

class Sort_0_1_2
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int Arr[];
		System.out.println("Enter the size : ");
		int size = sobj.nextInt();
		System.out.println("Enter the Elements :");
		Arr = new int[size];
		for(int i=0;i<size;i++)
		{
			Arr[i] = sobj.nextInt();		
		}
		Myclass mobj = new Myclass();
		mobj.Sort(Arr);
		for(int i=0;i<size;i++)
		{
			System.out.print(Arr[i]+" ");
		}
		System.out.println();

		
	}
}
