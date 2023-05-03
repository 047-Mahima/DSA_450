//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/*Method 1 : using vectors
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos, neg;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] >= 0 )
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }
        
        for(int i = 0 ; i < pos.size() ; i++)
        {
            arr[i] = pos[i];
        }
        
        for(int i = 0 ; i < neg.size() ; i++)
        {
            arr[pos.size()+i] = neg[i];
        }
    }
};*/

//Method 2 : 
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
       int temp[n];
       int j = 0;
       
       for(int i = 0 ; i < n ; i++)
       {
           if(arr[i] >= 0)
           {
               temp[j++] = arr[i];
           }
       }
       
       if( j == 0 || j == n) return;
       
       for(int i = 0 ; i < n ; i++)
       {
           if(arr[i] < 0)
           {
               temp[j++] = arr[i];
           }
       }
       
       for(int i = 0 ; i < n ; i++)
       {
           arr[i] = temp[i];
       }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends