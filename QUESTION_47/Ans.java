import java.util.*;
import java.io.*;
import java.lang.*;

class Reverse
{
   public static String reverseWord(String str)
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
        return nstr;
        
    }
}

class Reverse_String
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            String str = read.readLine();
            Reverse robj = new Reverse();
            String Ans = robj.reverseWord(str)
            System.out.println(Ans);
        }
    }
}

