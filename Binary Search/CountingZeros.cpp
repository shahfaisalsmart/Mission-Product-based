// BEGINNIGN WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
// Counting Zeros followed by One's
/*
 
 1. find first occurence
 2. Ans would be total - first occurence index
 
 */
#include<bits/stdc++.h>
using namespace std;

int first_occ(vector<int> arr,int low , int high)
{
    if(high >= low)
    {
        int mid = low + (high-low)/2;
        
        if((mid==0 || arr[mid-1]==1) && arr[mid]==0)
            return mid;
        else if(arr[mid]==1)
        {
            return first_occ(arr,mid+1, high);
        }
        else{
            return first_occ(arr,low,mid-1);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    
    int fst = first_occ(v,0,n-1);
    
    if(fst==-1)
    {
        cout<<"Element is not present........ :("<<endl;
        exit(0);
    }
    
    cout<<"Number of Zeros Are: "<<n-fst<<endl;
    return 0;
}
