import java.util.*;

class Myclass
{
	public int Min(int Arr[],int k)
	{
		if(k > Arr.length)
		{
			return -1;
		}
		TreeMap<Integer,Integer>tobj = new TreeMap<>();
		for(int i=0;i<Arr.length;i++)
		{
			if(tobj.containsKey(Arr[i]))
			{
				int no = tobj.get(Arr[i]);
				no++;
				tobj.put(Arr[i],no);
			}
			else
			{
				tobj.put(Arr[i],1);
			}
		}
		boolean flag = false;
		int freq = 0,ans = 0;
		for(Integer a : tobj.keySet())
		{
			freq = freq + tobj.get(a);
			System.out.println(a+"->"+tobj.get(a));
			if(freq >= k )
			{
				ans = a;
				flag = true;
				break;
			}
		}
		
		if(flag == true)
		{
			return ans;
		}
		else
		{
			return -1;
		}
	}

	public int Max(int Arr[],int k)
	{
		if(k > Arr.length)
		{
			return -1;
		}
		TreeMap<Integer,Integer>tobj = new TreeMap<>(Collections.reverseOrder());
		for(int i=0;i<Arr.length;i++)
		{
			if(tobj.containsKey(Arr[i]))
			{
				int no = tobj.get(Arr[i]);
				no++;
				tobj.put(Arr[i],no);
			}
			else
			{
				tobj.put(Arr[i],1);
			}
		}
		boolean flag = false;
		int freq = 0,ans = 0;
		for(Integer a : tobj.keySet())
		{
			freq = freq + tobj.get(a);
			System.out.println(a+"->"+tobj.get(a));
			if(freq >= k )
			{
				ans = a;
				flag = true;
				break;
			}
		}
		
		if(flag == true)
		{
			return ans;
		}
		else
		{
			return -1;
		}
	}
}

class Kth_Max_Min
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int Arr[];
		int size = 0;
		System.out.println("Enter the size");
		size = sobj.nextInt();
		Arr = new int[size];
		System.out.println("Enter the Elements : ");
		for(int i=0;i<size;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter the value of k : ");
		int k = sobj.nextInt();
		Myclass mobj = new Myclass();
		int iRet = mobj.Min(Arr,k);
		System.out.println("Kth Minimum Element is : "+iRet);

		int iRet1 = mobj.Max(Arr,k);
		System.out.println("Kth Maximum Element is : "+iRet1);

	}
}
