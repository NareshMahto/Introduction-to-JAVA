/*
Diamond of stars
-------------------------------
Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5
  *
 ***
*****
 ***
  *
  
Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *
  
Sample Input 2:
3

Sample Output 2:
  *
 ***
  *
*/

import java.util.Scanner;
public class Solution {
    
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        int j;
        int n1 = (n/2)+1;
		int n2 = n/2;
        while(i <= n1){
            j = 1;
            while(j <= n1-i){
                System.out.print(" ");
                j++;
            }
            j = 1;
            while(j <= i*2-1){
                System.out.print('*');
                j++;
            }
            System.out.println();
            i++;
        }
    	i = n2;
        while(i > 0){
            j =1;
            while(j<=n2-i+1){
                System.out.print(" ");
                j++;
            }
            j = 1;
            while(j<= i*2-1){
                System.out.print('*');
                j++;
            }
            System.out.println();
            i--;
            
            
        }
        
    }
}
