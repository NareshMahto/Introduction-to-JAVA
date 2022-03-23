/*
Star Pattern
--------------------------
Send Feedback
Print the following pattern
Pattern for N = 4
   *
  *** 
 *****
 
Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3

Sample Output 1 :
   *
  *** 
 *****
 
Sample Input 2 :
4

Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        for (int k=1; k<=i; k++){
            cout<<"*";
        }
        
        for (int l=2; l<=i; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
