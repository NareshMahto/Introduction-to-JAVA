/*
Triangle of Numbers
-----------------------
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4
       1
      232
     34543
    4567654

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
       1
      232
     34543
    4567654
   567898765
   
Sample Input 2:
4

Sample Output 2:
        1
       232
      34543
     4567654
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, spc, n;
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        spc = n - i;
        while (spc-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}
