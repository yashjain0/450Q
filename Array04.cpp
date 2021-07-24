// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
    int hash[3]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]=hash[a[i]]+1;
    }
    for(int i=0;i<n;i++)
    {
        if(i<hash[0]) a[i]=0;
        else if(i<hash[0]+hash[1]) a[i]=1;
        else if(i<hash[0]+hash[1]+hash[2]) a[i]=2;
    }
// coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
