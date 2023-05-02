
/*Method 1 :
void sort012(int a[], int n)
    {
        // code here 
        sort(a, a+n);
    }
*/

/*Method 2 :
count all zeroes, ones& twos
*/

/*Method 3 :
void sort012(int a[], int n)
    {
        // code here 
        int count_0 = 0, count_1 = 0, count_2 = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 0)
            {
                count_0++;
            }
            if(a[i] == 1)
            {
                count_1++;
            }
            if(a[i] == 2)
            {
                count_2++;
            }
        }
        for(int i = 0 ; i < count_0 ; i++)
        {
            a[i] = 0;
        }
        
        for(int i = count_0 ; i < count_0 + count_1 ; i++)
        {
            a[i] = 1;
        }
        
        for(int i = count_0+count_1 ; i < count_0+count_1+count_2 ; i++)
        {
            a[i] = 2;
        }
    }
    
};
*/

/*Using switch case method*/

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low = 0, mid = 0, high = n-1;
        
        
        while(mid <= high)
        {
            
           switch(a[mid])
           {
               case 0 :swap(a[low++], a[mid++]); break;
               
               case 1 : mid++; break;
               
               case 2 : swap(a[mid], a[high--]); break;
           }
        }
        
        
    }
    
};