//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++
/*METHODS:
1. Swap -> for loop, while loop
2. inbuilt function
*/

void reverse(string &str, int i, int j)
{
   for(int i = 0 ; i < str.size()/2 ; i++)
   {
       swap(str[i], str[str.size()-1-i]);
   }
}

string reverseWord(string str){
    
  //Your code here
  reverse(str, 0, str.size()-1);
  return str;
}

