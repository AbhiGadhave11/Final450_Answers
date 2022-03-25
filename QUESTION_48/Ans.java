import java.util.*;

class MyClass
{
	public boolean IsPalindrome(String str)
	{
		char Arr[] = str.toCharArray();
        
        int i = 0;
        int j = Arr.length-1;
        while(i < j)
        {
            char temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
            i++;
            j--;
        }
        String nstr = new String(Arr);
        if(nstr.equals(str))
        {
        	return true;
        }
        else
        	return false;
	} 
}

class Palindrome_String
{
	public static void main(String Arg[])
	{
		String str = "";
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the String");
		str = sobj.next();
		MyClass mobj = new MyClass();
		boolean bret = mobj.IsPalindrome(str);
		if(bret == true)
		{
			System.out.println("Given String is Palindrome");
		}
		else
		{
			System.out.println("Given String is Not Palindrome");
		}
	}
}
