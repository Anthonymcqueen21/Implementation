using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {
     static void Main(String[] args) {
         string[] token_n = Console.ReadLine().Split(' ');
         int n = Convert.ToInt32(tokens_n[0]);
         int k = Convert.ToInt32(tokens_n[1]);
         string[] height_temp = Console.ReadLine().Split(' ');
         int[] height = Array.ConvertAll(height_temp,Int32.Parse);
         int jumps = height.Max() - k;
         Console.WriteLine(jumps > 0 ? jumps : 0);
     }
}
