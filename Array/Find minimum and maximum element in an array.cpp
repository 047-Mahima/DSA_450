//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

/*1. for minimum no of comparisons, find out the first 
mini & maxi in the first two elements, then compare them with 
the rest of the array.
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    
    ll mini, maxi;
    if(n==1)
    {
        return {a[0], a[0]};
    }
        if(a[0] > a[1])
        {
            mini = a[1];
            maxi = a[0];
        }
        else
        {
            mini = a[0];
            maxi = a[1];
        }

       for(int i = 2 ; i < n ; i++)
    {
        if(a[i] > maxi)
        {
            maxi = a[i];
        }
        
        if(a[i] < mini)
        {
            mini = a[i];
        }
    }

    return {mini, maxi};
}

}