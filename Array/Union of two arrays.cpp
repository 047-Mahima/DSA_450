//User function template in C++

/*Method 1 : using two loops - gives TLE
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
       int count = 0;
       for(int i = 0 ; i < n ; i++)
       {
           for(int j = 0 ; j < m ; j++)
           {
               if(a[i] == b[j])
               {
                   count++;
               }
           }
       }
       return (n+m-count);
    }
*/

/* Method 2 : using set*/
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
       unordered_set<int> st;
       
       for(int i = 0 ; i < n ; i++)
       {
           st.insert(a[i]);
       }
       
       for(int i = 0 ; i < m ; i++)
       {
               st.insert(b[i]);
       }
       return st.size();
    }
};