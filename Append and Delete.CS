using System;
namespace _02_Implementation
{
    class _17_Append_and_delete
    {
       public static void Main()
       {
          string s = Console.ReadLine();
          string t = Console.ReadLine();
          int k = Convert.ToInt32(Console.ReadLine());
          
          int i;
          for (i = 0; i < s.Length && i < t.Length; i++)
          {
              if (s[i] != t[i])
              {
                 break;
              }
          }
          
          int d = s.Length - i;
          int a = t.Length - i;
          
          int difference = k - d - a;
          if (difference < 0)
          {
             Console.WriteLine("NO");
          }
          else
          {
             if(difference % 2 == 0)
             {
                 Console.WriteLine("YES");
             }
             else
             {
                 Console.WriteLine(difference >= 2 * i ? "Yes" : "No");
             }
          }
      }
  }
}
